#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"	
using namespace std;
//Student 클래스 멤버 함수의 정의
//클래스 이름과 범위 지정연산자 :: 를 이용해 정의

Student::Student() : name{ 0 }, korean{ 0 }, math{ 0 }, english{ 0 }, average{ 0.0 }, grade('F')
{}

Student::Student(const char* str, int k, int m, int e) : name{ 0 }, korean{ 0 }, math{ 0 }, english{ 0 }, average{ 0.0 }, grade('F')
{
	SetName(str);
	SetKorean(k);
	Setmath(m);
	Setenglish(e);

}

//소멸자

//설정자와 접근자
//void SetName(char Name[81]) { for (int i = 0; i < 81; i++) { name[i] = Name[i]; }; }
void Student::SetName(const char* str)
{
	if (str != NULL)
		strcpy(name, str);
}


void Student::SetKorean(int val) {
	if (val > 100)
		korean = 100;
	else if (val < 0)
		korean = 0;
	else														//원래 다 이렇게 해야 한다.
		korean = val;
}


double Student::Getaverage()
{
	average = (double)(korean + math + english) / 3;
	return average;
}

char Student::GetGrade()
{
	//등급을 구하기 전에 반드시 평균을 계산해야 한다.
	Getaverage();

	if (average >= 90)
		grade = 'A';
	else if (average >= 80)
		grade = 'B';
	else if (average >= 70)
		grade = 'C';
	else if (average >= 60)
		grade = 'D';
	else
		grade = 'F';

	return grade;
}

//출력
void Student::Print()
{

	cout << "name = " << name << endl << "korean = " << korean << endl << "math = " << math << endl << "english = " << english << endl << "average = " << Getaverage() << endl;

	cout << "grade = " << GetGrade() << endl << endl;

}
