#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//������ ���� ������
typedef enum _gender
{
	male, female, natural
} Gender;

class Person
{
private:
	char name[81];
	int age;
	Gender gender;
	//���� const ��� ������ ���� int �ڷ����� ��쿡�� Ŭ���� ������ �ʱ�ȭ �� �� �ִ�
	const static char* STR_GENDER[3];
public:
	//������
	Person()  : name{ 0 }, age(0), gender(male)
	{}
	Person(const char* str, int n1, Gender n2) 
		: name{0}, age(0), gender(n2)
	{
		SetName(str);
		SetAge(n1);
	}


	//�Ҹ���

	//������
	void SetName(const char* str) { strcpy(name, str); }

	void SetAge(int n) { age = (n > 0) ? n : 0; }

	void SetGender(Gender n) { gender = n; }
	//������
	char *GetName() { return name; }

	int GetAge() { return age; }

	Gender GetGender() { return gender; }
	//��� �Լ�
	void PrintPerson() const
	{
		cout << "name = " << name << endl << "age = " << age << endl << "gender = " << STR_GENDER[gender] << endl;
	}
};


const char* Person::STR_GENDER[3] = {"male", "female", "nature"};			//gender�� ���ڰ� �ƴ� ������ ǥ�� �ϰ� �����Ƿ�


class Student : public Person
{
private:
	int id;
	int grade;
	int classNum;
	double gpa;

public:
	//������
	Student() : Person(), id(0), grade(0), classNum(0), gpa(0.0)
	{}

	Student(const char *str, int n1, Gender n2, int nid, int ngrade, int nclassnum, double ngpa)
		: Person(str, n1, n2), id(nid), grade(ngrade), classNum(nclassnum), gpa(ngpa) 
	{}
	
	//������
	void SetId(int n) { id = n; }
	void SetGrade(int n) { grade = n; }
	void SetClassNum(int n) { classNum = n; }
	void SetGpa(double n) { gpa = n; }

	//������

	int GetId() { return id; }
	int GetGrade() { return grade; }
	int GetClassNum() { return classNum; }
	double GetGpa() { return gpa; }

	//���
	void StudentPrint()
	{
		PrintPerson();
		cout << "id = " << id << endl << "grade = " << grade << endl << "classNum = " << classNum << endl << "gpa = " << gpa << endl << endl;
	}
};

class Teacher : public Person
{
private:
	int id;
	char subject[81];

public:
	//������
	Teacher() : Person(), id(id), subject{ 0 }
	{}

	Teacher(const char* str, int n1, Gender n2, int id, const char* subj)
		:Person(str, n1, n2), id(id), subject{ 0 }
	{
		SetSubject(subj);
	}

	//������
	void SetId(int n) { id = n; }
	void SetSubject(const char *subj) { strcpy(subject, subj); }

	//������
	int GetId() const { return id; }
	const char* GetSubject() const {return subject;}

	//���
	void PrintTeacher() const
	{
		PrintPerson();
		cout << "id = " << id << endl;
		cout << "subject = " << subject << endl << endl; 
	}
};

int main()
{
	Teacher porter("porter", 24, Gender::natural, 213, "magic");
	Student jackson("jackson", 16, Gender::male, 2458, 5, 1, 3.5);


	porter.PrintTeacher();
	jackson.StudentPrint();

	Person* ptrList[2] = { &porter, &jackson };

	for (int i = 0; i < 2; i++)
		ptrList[i]->PrintPerson();



	return 0;
}