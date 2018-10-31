#include "TV.h"
#include <iostream>
using namespace std;

TV::TV()
{
	itemName = new char[100];// 초기 제품번호 포인터 할당
	memset(itemName, 0, 100);
	size=0.;	 //초기 사이즈 0
	power=false; //초기 전원상태 off
	channel=0; // 채널
}
TV::TV(char* name, double size)
{
	itemName = new char[100];
	memcpy(itemName, name, sizeof(name));
	(*this).size = size;
}
void TV::Power() 
{
	power = !power;
}

void TV::ChannelUp() 
{
	channel++;
}

void TV::ChannelDown()
{
	channel--;
}

void TV::SetChannel(int channelNum)
{
	(*this).channel = channelNum;
}

int TV::GetChannel()
{
	return channel;
}
TV::~TV()
{
	delete [] itemName;
}