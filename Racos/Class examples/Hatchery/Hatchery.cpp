
#include "Hatchery.h"
#include "Zergling.h"
#include <iostream>
#include <Windows.h>
using namespace std;

Hatchery::Hatchery()
{
}

Hatchery::Hatchery(int _t, int _max, int _hat, int _lev)
{
}
void Hatchery::MakeZergling()
{
	cout <<"���� �����..."<<endl;
	Sleep(time*1000);
	Zergling Zerg1;
	cout <<"���۸��� �����Ǿ����ϴ�."<<endl;
	Zerg1.Move(1,1);

}
void Hatchery::DestroyZergling()
{
	
}
void Hatchery::Upgrade()
{
	level++;
	cout << "���� ���׷��̵� �ܰ�� " << level << "�ܰ� �Դϴ�."<<endl;
}