#include "Marine.h"
#include "Zergling.h"
#include "BattleCruiser.h"

typedef Marine M;
typedef Zergling Z;
typedef BattleCruiser BC;
typedef Unit U; // �� ġ�� �����Ƽ� �׳� ���ڷ� ����������

void attackUnit(Unit* atk, Unit* def) // ������ �����ִ� ��Ʈ�� ����(ü�� �����϶� ���� �� ó����)
{
	if (atk->getenergy() > 0)
		def->setenergy(def->getenergy() - atk->getattackPoint());
	else
		cout << "attacker is already dead. attack not available." << endl;
	if (def->getenergy() <= 0)
	{
		cout << "defender is dead / ";
		def->print();
		if (atk->getenergy() <= 0)
			;
		else
		{
			cout << "attacker's status is ";
			atk->print();
		}
	}
	else
	{
		cout << "defender is alive / ";
		def->print();
		if (atk->getenergy() <= 0)
			;
		else
		{
			cout << "attacker's status is ";
			atk->print();
		}
	}
}
int main()
{
	/*M m(1, 2, 1);
	Z z(3, 4, 0);
	BC bc(5, 6, 2);
	m.print(); z.print(); bc.print();*/
	/*U* p[3] = { new M(1,2,1), new Z(3,4,0), new BC(5,6,2) };
	for (int i = 0; i < 3; i++)
		p[i]->activeSpecialAbility();
	for (int i = 0; i < 3; i++)
		delete p[i];*/
	M m(1, 2, 1);
	Z z(3, 4, 0);
	BC bc(5, 6, 2);
	m.print(); z.print(); bc.print();
	m.activeSpecialAbility();
	bc.activeSpecialAbility();
	attackUnit(&m, &bc);
	bc.activeSpecialAbility();
	z.activeSpecialAbility();
	z.activeSpecialAbility();
	z.activeSpecialAbility();
	// z.activeSpecialAbility(); // �� �κ��� Ȱ��ȭ�Ǹ� �޴� ���ذ� ���丷�� ���� �ʴ´�.
	attackUnit(&bc, &z);
	m.activeSpecialAbility();
	bc.activeSpecialAbility();
	attackUnit(&m, &bc);
	bc.activeSpecialAbility();
	attackUnit(&bc, &m);
	return 0;
}
