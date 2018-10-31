#pragma once
#include "Unit.h"
class BattleCruiser : public Unit
{
private:
	int numberOfYamato;
public:
	BattleCruiser(int x, int y, int l) : numberOfYamato(3)
	{
		setpos(x, y, l);
		setattackPoint(82.4f);
		setenergy(250.0f);
	}
	void activeSpecialAbility()
	{
		if (numberOfYamato > 0)
		{
			--numberOfYamato;
			cout << "Yamato is active" << endl;
		}
		else
			cout << "Yamato is inactive" << endl;
	}
	float getattackPoint()
	{
		if (numberOfYamato > 0)
		{
			setattackPoint(300);
			return Unit::getattackPoint();
		}
		else
		{
			setattackPoint(82.4f);
			return Unit::getattackPoint();
		}
	}
};