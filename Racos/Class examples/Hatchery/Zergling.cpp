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
	cout << name << "의 현재 위치 : (" << x << ","<< y << ")"<<endl;
}

void Zergling::Attack(Zergling &enemy)
{
	enemy.Damage((*this));
	cout << enemy.GetName() <<"을" << power-enemy.GetShield() <<" 만큼 공격하였다."<<endl;
}

void Zergling::Damage(Zergling &enemy)
{
	int dam = enemy.GetPower() - shield;
	health = health - dam;
	cout << enemy.GetName() <<"로부터" << dam <<"만큼의 데미지를 받았다."<<endl;
}

void Zergling::Patrol()
{
	cout << name << "은 현재 정찰 모드 입니다."<<endl;
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