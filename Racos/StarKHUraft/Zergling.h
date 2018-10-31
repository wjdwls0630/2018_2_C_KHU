#pragma once
#include "Unit.h"
class Zergling : public Unit
{
private:
	int numberOfDefenseUp;
	bool isDUP;
public:
	Zergling(int x, int y, int l) : numberOfDefenseUp(3), isDUP(false)
	{
		setpos(x, y, l);
		setattackPoint(21.5f);
		Unit::setenergy(50.0f);
	}
	void activeSpecialAbility()
	{
		if (numberOfDefenseUp > 0) // 3회 다 쓰는 동안
		{
			--numberOfDefenseUp;
			cout << "DefenseUp is active" << endl;
			isDUP = true;
		}
		else // 0회일때
		{
			cout << "DefenseUp is inactive" << endl;
			isDUP = false;
		}
	}
	void setenergy(float e)
	{
		if (!isDUP)
			Unit::setenergy(e); // Unit Class의 행동을 따른다.
		else
			Unit::setenergy((getenergy()+e)/2.0f);
	} // 이 함수는 표지에 직접 그려보면서 흐름을 따라가면 이해가 될 것이라 생각한다.
};