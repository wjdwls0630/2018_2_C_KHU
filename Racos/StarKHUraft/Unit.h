#pragma once
#include<iostream>
#include<string>
using namespace std;
class Pos2D // 2������ǥ�� �޴� Ŭ�����̴�.
{
private:
	int x;
	int y;
public:
	Pos2D(int x1=0, int y1=0) : x(x1), y(y1) {} // �ƹ��͵� �ȹ����� 0�� �ִ´�.
	int getX() { return x; }
	int getY() { return y; }
	void setX(int x1) { x = x1; }
	void setY(int y1) { y = y1; }
};

class Pos3D : public Pos2D // Pos3D�� public type���� Pos2D�� ��� �޴´�.
{
private:
	string whereisunit[3]; // ���� / ��� / �Ƕ� ����
	string location; // ��ġ
public:
	Pos3D()
	{
		whereisunit[0] = "Ground";
		whereisunit[1] = "Hill";
		whereisunit[2] = "Air";
	}
	void setloc(int i) { location = whereisunit[i]; } // ���� ���� �Լ�
	void printloc() { cout << location << endl; }
};

typedef Pos3D POS; // Pos3D�� �� �ٸ� �̸��� POS��� �������ش�.

class Unit
{
private:
	POS pos;
	float attackPoint; // ���ݷ�
	float energy; // ü��
public:
	Unit() {}
	Unit(int a, int b, float atkP, float e, int l)
		: attackPoint(atkP), energy(e)
	{
		pos.setX(a); pos.setY(b); pos.setloc(l);
	}
	virtual float getattackPoint() { return attackPoint; }
	float getenergy() { return energy; }
	void setpos(int a, int b, int l) { pos.setX(a); pos.setY(b); pos.setloc(l); }
	void setattackPoint(float atkP) { attackPoint = atkP; }
	virtual void setenergy(float e) { energy = e; } // �׳� virtual function(���� �ȸ�����൵ ������ ��)
	void print() 
	{ 
		cout << pos.getX() << ", " << pos.getY() << ", " << attackPoint << ", " << energy << ", ";
		pos.printloc();
	}
	virtual void activeSpecialAbility() = 0; // pure virtual function�� ����(������ ��������� ���� ��)
};