#include "Namecard.h"
#include <iostream>
using namespace std;

const int LEN=30;
const int SIZE=2;
int main()
{	
	Namecard *arr[SIZE];

	char name[LEN];
	char phone[LEN];
	char addr[LEN];
	char position[LEN];
	
	for(int i=0; i<SIZE; i++)
	{
		cout << i <<"��° ���Ի���� ������ �Է��ϼ���."<<endl;
		cout << " ��    �� : ";
		cin >> name;
		cout << " ��ȭ��ȣ : ";
		cin >> phone;
		cout << " ȸ���ּ� : ";
		cin >> addr;
		cout << " ��    �� : ";
		cin >> position;
		arr[i] = new Namecard(name, phone, addr, position);
	}

	cout << "================================"<<endl;
	cout << "������ ��� " <<endl;
	for(int i=0; i<SIZE; i++)
	{
		arr[i]->ShowData();
		cout << "--------------------------------"<<endl;
	}
	cout << "================================"<<endl;
	return 0;
}