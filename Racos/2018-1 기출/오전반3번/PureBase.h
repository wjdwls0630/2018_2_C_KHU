#pragma once
#include<iostream>
#include<iomanip>
using namespace std;
class PureBase
{
private:
	static int objcount;
public:
	PureBase();
	int getObjectCount();
	virtual void shoot() = 0;
};
PureBase::PureBase() { objcount++; }
int PureBase::getObjectCount() { return objcount; }