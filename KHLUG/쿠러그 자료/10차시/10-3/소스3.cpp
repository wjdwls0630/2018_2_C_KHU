#include "head3.h"


int Person::counter = 0;

int main()
{

	Person p1("��ö��", 30, "asdf1@hanmail.net");
	Person p2("��ö��", 40, "naa13@naver.com");
	Person p3("�����", 50, "meaning@hanmail.net");

	p1.print();
	p2.print();
	p3.print();

	Person::count();
	return 0;
}