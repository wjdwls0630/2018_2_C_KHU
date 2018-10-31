#pragma once
#include<iostream>
#include<string>
using namespace std;
class Pos2D // 2차원좌표를 받는 클래스이다.
{
private:
	int x;
	int y;
public:
	Pos2D(int x1=0, int y1=0) : x(x1), y(y1) {} // 아무것도 안받으면 0을 넣는다.
	int getX() { return x; }
	int getY() { return y; }
	void setX(int x1) { x = x1; }
	void setY(int y1) { y = y1; }
};

class Pos3D : public Pos2D // Pos3D는 public type으로 Pos2D를 상속 받는다.
{
private:
	string whereisunit[3]; // 공중 / 언덕 / 맨땅 구분
	string location; // 위치
public:
	Pos3D()
	{
		whereisunit[0] = "Ground";
		whereisunit[1] = "Hill";
		whereisunit[2] = "Air";
	}
	void setloc(int i) { location = whereisunit[i]; } // 색인 설정 함수
	void printloc() { cout << location << endl; }
};

typedef Pos3D POS; // Pos3D의 또 다른 이름을 POS라고 지정해준다.

class Unit
{
private:
	POS pos;
	float attackPoint; // 공격력
	float energy; // 체력
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
	virtual void setenergy(float e) { energy = e; } // 그냥 virtual function(굳이 안만들어줘도 실행은 됨)
	void print() 
	{ 
		cout << pos.getX() << ", " << pos.getY() << ", " << attackPoint << ", " << energy << ", ";
		pos.printloc();
	}
	virtual void activeSpecialAbility() = 0; // pure virtual function의 구현(무조건 구현해줘야 실행 됨)
};