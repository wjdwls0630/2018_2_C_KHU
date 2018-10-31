#include "head3.h"


int Person::counter = 0;

int main()
{

	Person p1("梯繹團", 30, "asdf1@hanmail.net");
	Person p2("寰繹熱", 40, "naa13@naver.com");
	Person p3("檜營熱", 50, "meaning@hanmail.net");

	p1.print();
	p2.print();
	p3.print();

	Person::count();
	return 0;
}