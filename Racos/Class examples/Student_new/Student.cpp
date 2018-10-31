
#include "Student.h"
#include <iostream>
using namespace std;


Student::Student()
{
	name = new char[100];
	strcpy(stuNum, "2012000000");
	grade = 1;
	graduateToBe = false;
	lockerUser = false;
}

Student::Student(char* _name, char* _stuNum, int _grade, bool _gra, bool _locker)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);

	strcpy(stuNum, _stuNum);
	
	grade = _grade;
	graduateToBe = _gra;
	lockerUser = _locker;
}

Student::Student(const Student &st)
{
	strcpy(name, st.name);
	strcpy(stuNum, st.stuNum);
	grade = st.grade;
	graduateToBe = st.graduateToBe;
	lockerUser = st.lockerUser;
}
	
void Student::PrintGraduate()
{
	if(graduateToBe == true)
	{
		cout << name <<"��(��) ���� �������Դϴ�. " <<endl;
	}else
	{
		cout << name <<"��(��) ���� �����ڰ� �ƴմϴ�. " <<endl;
	}
}

void Student::PrintLocker()
{
	if(lockerUser == true)
	{
		cout << name <<"��(��) �繰�� ����� �Դϴ�. " <<endl;
	}else
	{
		cout << name <<"��(��) �繰�� ����ڰ� �ƴմϴ�. " <<endl;
	}
}

void Student::SetGraduate(bool _gra)
{
	graduateToBe = _gra;
}

void Student::SetLocker(bool _lock)
{
	lockerUser = _lock;
}