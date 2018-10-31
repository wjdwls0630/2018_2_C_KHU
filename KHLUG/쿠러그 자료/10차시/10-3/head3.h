#pragma once
#include <iostream>
using namespace std;



class Person
{
private :
	char * name;
	int age;
	char * email;
	static int counter;
public :
	Person(char * name1, int age1, char * email1);
	void print();
	static void count();
};

Person::Person(char * name1, int age1, char * email1)
{
	int len1 = strlen(name1);
	name = new char[len1 + 1];
	strcpy_s(name, len1 + 1, name1);

	age = age1;

	int len2 = strlen(email1);
	email = new char[len2 + 1];
	strcpy_s(email, len2 + 1, email1);
	counter++;
}

void Person::print()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "�̸��� : " << email << endl << endl;
	
}

void Person::count()
{
	cout << "ȸ���� : " << counter << endl;
}