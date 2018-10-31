#include "Namecard.h"
#include <iostream>
using namespace std;

const int LEN=30;
Namecard::Namecard()
{
	name = new char[LEN];
	phone = new char[LEN];	
	addr = new char[LEN];
	position = new char[LEN];
	memset(name, 0, LEN);
	memset(phone, 0, LEN);
	memset(addr, 0, LEN);
	memset(position, 0, LEN);
}
Namecard::Namecard(char* _name, char* _phone, char* _addr, char* _pos)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);

	phone = new char[strlen(_phone)+1];
	strcpy(phone, _phone);

	addr = new char[strlen(_addr)+1];
	strcpy(addr, _addr);

	position = new char[strlen(_pos)+1];
	strcpy(position, _pos);


}
Namecard::~Namecard()
{
	delete [] name;
	delete [] phone;
	delete [] addr;
	delete [] position;
}
void Namecard::ShowData()
{
	cout << "이    름 :" << name <<endl;
	cout << "전화번호 :" << phone <<endl;
	cout << "회사주소 :" << addr <<endl;
	cout << "직    급 :" << position <<endl;
}
