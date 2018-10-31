#pragma once
#include<iostream>
#include<vector>
using namespace std;
class TUser
{
private:
	int need;
	int limit;
	bool isUsing;
public:
	TUser(int, int);
	bool time_goes_on(int&);
	void inToilet(int&);
};