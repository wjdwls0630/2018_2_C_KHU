#include "TV.h"
#include <iostream>
using namespace std;

TV::TV()
{
	itemName = new char[100];// �ʱ� ��ǰ��ȣ ������ �Ҵ�
	memset(itemName, 0, 100);
	size=0.;	 //�ʱ� ������ 0
	power=false; //�ʱ� �������� off
	channel=0; // ä��
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