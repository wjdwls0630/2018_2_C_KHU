#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//성별을 위한 열거형
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
	//정적 const 멤버 변수의 값이 int 자료형인 경우에만 클래스 내에서 초기화 할 수 있다
	const static char* STR_GENDER[3];
public:
	//생성자
	Person()  : name{ 0 }, age(0), gender(male)
	{}
	Person(const char* str, int n1, Gender n2) 
		: name{0}, age(0), gender(n2)
	{
		SetName(str);
		SetAge(n1);
	}


	//소멸자

	//설정자
	void SetName(const char* str) { strcpy(name, str); }

	void SetAge(int n) { age = (n > 0) ? n : 0; }

	void SetGender(Gender n) { gender = n; }
	//접근자
	char *GetName() { return name; }

	int GetAge() { return age; }

	Gender GetGender() { return gender; }
	//멤버 함수
	void PrintPerson() const
	{
		cout << "name = " << name << endl << "age = " << age << endl << "gender = " << STR_GENDER[gender] << endl;
	}
};


const char* Person::STR_GENDER[3] = {"male", "female", "nature"};			//gender를 숫자가 아닌 성별로 표기 하고 싶으므로


class Student : public Person
{
private:
	int id;
	int grade;
	int classNum;
	double gpa;

public:
	//생성자
	Student() : Person(), id(0), grade(0), classNum(0), gpa(0.0)
	{}

	Student(const char *str, int n1, Gender n2, int nid, int ngrade, int nclassnum, double ngpa)
		: Person(str, n1, n2), id(nid), grade(ngrade), classNum(nclassnum), gpa(ngpa) 
	{}
	
	//설정자
	void SetId(int n) { id = n; }
	void SetGrade(int n) { grade = n; }
	void SetClassNum(int n) { classNum = n; }
	void SetGpa(double n) { gpa = n; }

	//접근자

	int GetId() { return id; }
	int GetGrade() { return grade; }
	int GetClassNum() { return classNum; }
	double GetGpa() { return gpa; }

	//출력
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
	//생성자
	Teacher() : Person(), id(id), subject{ 0 }
	{}

	Teacher(const char* str, int n1, Gender n2, int id, const char* subj)
		:Person(str, n1, n2), id(id), subject{ 0 }
	{
		SetSubject(subj);
	}

	//설정자
	void SetId(int n) { id = n; }
	void SetSubject(const char *subj) { strcpy(subject, subj); }

	//접근자
	int GetId() const { return id; }
	const char* GetSubject() const {return subject;}

	//출력
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