#include <iostream>
using namespace std;

#include "TV.h"

int main()
{
	TV t("Wide40", 40);
	t.SetChannel(7);
	t.ChannelDown();
	cout << "현재 채널은 " <<t.GetChannel() <<"번 입니다."<<endl;

	return 0;
}