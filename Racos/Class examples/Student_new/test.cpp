#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student stu1("Kim", "2010101234", 3, false, true);
	Student stu2("Park", "2009101234", 4, false, false);
	Student stu3("Hong", "2008101234", 4, true, false);

	stu1.PrintLocker();
	stu2.PrintLocker();
	stu3.PrintLocker();
	cout <<"-----------------------------"<<endl;
	cout << "Park을 사물함 사용자로 변경."<<endl;
	stu2.SetLocker(true);
	cout <<"-----------------------------"<<endl;
	stu2.PrintLocker();


	return 0;
}
