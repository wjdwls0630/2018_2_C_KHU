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
		cout << i <<"번째 신입사원의 정보를 입력하세요."<<endl;
		cout << " 이    름 : ";
		cin >> name;
		cout << " 전화번호 : ";
		cin >> phone;
		cout << " 회사주소 : ";
		cin >> addr;
		cout << " 직    급 : ";
		cin >> position;
		arr[i] = new Namecard(name, phone, addr, position);
	}

	cout << "================================"<<endl;
	cout << "데이터 출력 " <<endl;
	for(int i=0; i<SIZE; i++)
	{
		arr[i]->ShowData();
		cout << "--------------------------------"<<endl;
	}
	cout << "================================"<<endl;
	return 0;
}