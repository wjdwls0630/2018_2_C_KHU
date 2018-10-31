#pragma once
#include "Unit.h" // �������� ��������� �̷������� include����.
class Marine : public Unit
{
private:
	bool isSteamPacked; // ������ ���?
public:
	Marine(int x, int y, int l) : isSteamPacked(false) // ÷�� �Ⱦ��ϱ�.
	{
		setpos(x, y, l);
		setattackPoint(32.1f);
		setenergy(104.0f);
	}
	void activeSpecialAbility()
	{
		if (!isSteamPacked) // �Ⱦ� ���¶�� ������ �����Ѵ�.
		{
			setattackPoint(getattackPoint());
			setenergy(getenergy() - 20.0f);
			cout << "SteamPack is active" << endl;
			isSteamPacked = true; // ���� �����ϱ� ���� ��ȯ������ �۵����� �ʴ´�.
		}
		else
		{
			cout << "SteamPack is inactive" << endl;
			setattackPoint(32.1f);
		}
	}
	float getattackPoint() // �� ������ ���� activeSpecialAbility(), �׸��� main�� attackUnit() �Լ��� �ߴ����� �ɰ� ��� ����Ǵ��� Ȯ���غ� ��.
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