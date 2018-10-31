#pragma once
#include "Unit.h" // 내가만든 헤더파일은 이런식으로 include해줌.
class Marine : public Unit
{
private:
	bool isSteamPacked; // 스팀팩 썼니?
public:
	Marine(int x, int y, int l) : isSteamPacked(false) // 첨엔 안쓰니까.
	{
		setpos(x, y, l);
		setattackPoint(32.1f);
		setenergy(104.0f);
	}
	void activeSpecialAbility()
	{
		if (!isSteamPacked) // 안쓴 상태라면 쓰도록 구현한다.
		{
			setattackPoint(getattackPoint());
			setenergy(getenergy() - 20.0f);
			cout << "SteamPack is active" << endl;
			isSteamPacked = true; // 이제 썼으니까 다음 소환에서는 작동하지 않는다.
		}
		else
		{
			cout << "SteamPack is inactive" << endl;
			setattackPoint(32.1f);
		}
	}
	float getattackPoint() // 이 지점과 위의 activeSpecialAbility(), 그리고 main의 attackUnit() 함수에 중단점을 걸고 어떻게 실행되는지 확인해볼 것.
	{
		if (isSteamPacked)
			return Unit::getattackPoint();
		else
		{
			setattackPoint(Unit::getattackPoint()*1.5f);
			return Unit::getattackPoint();
		}
	}
};