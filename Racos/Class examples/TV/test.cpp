#include <iostream>
using namespace std;

#include "TV.h"

int main()
{
	TV t("Wide40", 40);
	t.SetChannel(7);
	t.ChannelDown();
	cout << "���� ä���� " <<t.GetChannel() <<"�� �Դϴ�."<<endl;

	return 0;
}