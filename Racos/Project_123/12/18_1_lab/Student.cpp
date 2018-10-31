#include "Student.h"
Student::Student() {} // 기본 생성자
Student::Student(std::string n, int i, std::string d) // parameter를 받는 생성자
{
	name = n;
	id = i;
	dept = d;
}
/*initialization list(초기화리스트) 통해서 구현하면 다음과 같다.
Student::Student(string n, int i, string d)
	: name(n), id(i), dept(d)
{}
이렇게 하면 보다 더 쉽게 초기화가 가능하다.*/
Student::~Student() {} // 소멸자(동적할당 같은 경우에만 구현해도 됨. 없어도 무방.)
void Student::setName(std::string n)
{
	name = n;
}
void Student::setID(int i)
{
	id = i;
}
void Student::setdept(std::string d)
{
	dept = d;
}
void Student::print()
{
	std::cout << name << " " << id << " " << dept << std::endl;
}
void Student::addGrade(std::string sub, char g)
{
	subjectList.push_back(sub);
	grade.push_back(g);
}
void Student::printGrades()
{
	for (unsigned int i = 0; i < grade.size(); i++)
		std::cout << subjectList[i] << " " << grade[i] << std::endl;
}
/*header file안에 전부 다 구현해도 됨. (클래스 바깥에 구현해도 되고 클래스 안에 구현해도 됨)*/