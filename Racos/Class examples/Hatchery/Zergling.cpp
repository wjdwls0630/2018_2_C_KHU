#include <iostream>
using namespace std;
#include "Zergling.h"

Zergling::Zergling()
{
	health = 100;
	power = 15;
	shield = 5;
	x = 0;
	y = 0;
	name = new char[100];
	name="";
	
}

Zergling::Zergling(char* _name, int _he, int _po, int _shi, int _x, int _y)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);
	health = _he;
	power = _po;
	shield = _shi;
	x = _x;
	y = _y;
}
	
void Zergling::Move(int _x, int _y)
{
	x = _x;
	y = _y;
	cout << name << "�� ���� ��ġ : (" << x << ","<< y << ")"<<endl;
}

void Zergling::Attack(Zergling &enemy)
{
	enemy.Damage((*this));
	cout << enemy.GetName() <<"��" << power-enemy.GetShield() <<" ��ŭ �����Ͽ���."<<endl;
}

void Zergling::Damage(Zergling &enemy)
{
	int dam = enemy.GetPower() - shield;
	health = health - dam;
	cout << enemy.GetName() <<"�κ���" << dam <<"��ŭ�� �������� �޾Ҵ�."<<endl;
}

void Zergling::Patrol()
{
	cout << name << "�� ���� ���� ��� �Դϴ�."<<endl;
}

void Zergling::Die()
{
	health = 0;
}

int Zergling::GetPower()
{
	return power;
}
char* Zergling::GetName()
{
	return name;
}
int Zergling::GetShield()
{
	return shield;
}
Zergling::~Zergling()
{
	delete [] name;
}

void Zergling::SetName(char* _name)
{
	strcpy(name, _name);
}