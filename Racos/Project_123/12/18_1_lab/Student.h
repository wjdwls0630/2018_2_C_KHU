#pragma once
#include<iostream>
#include<vector>
#include<string>
//using namespace std;
class Student
{
private:
	std::string name;
	int id;
	std::string dept;
	std::vector<std::string> subjectList;
	std::vector<char> grade;
public:
	Student(); // 기본 생성자
	Student(std::string, int, std::string); // parameter를 받는 생성자
	~Student();
	void setName(std::string);
	void setID(int);
	void setdept(std::string);
	void addGrade(std::string, char);
	void print();
	void printGrades();
	// float getGPA();
};