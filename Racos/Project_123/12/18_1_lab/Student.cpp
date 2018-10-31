#include "Student.h"
Student::Student() {} // �⺻ ������
Student::Student(std::string n, int i, std::string d) // parameter�� �޴� ������
{
	name = n;
	id = i;
	dept = d;
}
/*initialization list(�ʱ�ȭ����Ʈ) ���ؼ� �����ϸ� ������ ����.
Student::Student(string n, int i, string d)
	: name(n), id(i), dept(d)
{}
�̷��� �ϸ� ���� �� ���� �ʱ�ȭ�� �����ϴ�.*/
Student::~Student() {} // �Ҹ���(�����Ҵ� ���� ��쿡�� �����ص� ��. ��� ����.)
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
/*header file�ȿ� ���� �� �����ص� ��. (Ŭ���� �ٱ��� �����ص� �ǰ� Ŭ���� �ȿ� �����ص� ��)*/