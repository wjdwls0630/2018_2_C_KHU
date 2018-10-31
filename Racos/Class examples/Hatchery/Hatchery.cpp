
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
	cout <<"생성 대기중..."<<endl;
	Sleep(time*1000);
	Zergling Zerg1;
	cout <<"저글링이 생성되었습니다."<<endl;
	Zerg1.Move(1,1);

}
void Hatchery::DestroyZergling()
{
	
}
void Hatchery::Upgrade()
{
	level++;
	cout << "현재 업그레이드 단계는 " << level << "단계 입니다."<<endl;
}