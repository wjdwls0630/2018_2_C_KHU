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
		if (numberOfDefenseUp > 0) // 3ȸ �� ���� ����
		{
			--numberOfDefenseUp;
			cout << "DefenseUp is active" << endl;
			isDUP = true;
		}
		else // 0ȸ�϶�
		{
			cout << "DefenseUp is inactive" << endl;
			isDUP = false;
		}
	}
	void setenergy(float e)
	{
		if (!isDUP)
			Unit::setenergy(e); // Unit Class�� �ൿ�� ������.
		else
			Unit::setenergy((getenergy()+e)/2.0f);
	} // �� �Լ��� ǥ���� ���� �׷����鼭 �帧�� ���󰡸� ���ذ� �� ���̶� �����Ѵ�.
};