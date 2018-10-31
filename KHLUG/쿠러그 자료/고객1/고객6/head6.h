#pragma once
#include <iostream>
using namespace std;


class Laptop
{
private :
	char osName[20];
	double displayWidth;
	long memorySize;

public :
	Laptop();
	Laptop(char[20] ,double, long);
	~Laptop();
	char* getOsName();
	double getDisplayWidth();
	long getMemorySize();
	void setOsName(char[20]);
	void setDisplayWidth(double);
	void setMemorySize(long);
	void print();
};


Laptop::Laptop()
{
	cout << "Laptop " << this << " assembled" << endl;
}

Laptop::Laptop(char name[20], double width1, long size1)
{
	int len = strlen(name);
	strcpy_s(osName,len + 1, name);
	displayWidth = width1;
	memorySize = size1;
	cout << "Laptop " << this << " assembled" << endl;
}

char* Laptop::getOsName()
{
	return osName;
}

double Laptop::getDisplayWidth()
{
	return displayWidth;
}

long Laptop::getMemorySize()
{
	return memorySize;
}

void Laptop::setOsName(char name[20])
{
	int len = strlen(name);
	strcpy_s(osName, len+1, name);
}

void Laptop::setDisplayWidth(double width1)
{
	displayWidth = width1;
}

void Laptop::setMemorySize(long size1)
{
	memorySize = size1;
}

Laptop::~Laptop()
{
	cout << "destroyer!" << endl;
}



void Laptop::print()
{
	cout << "운영체제 이름 : " << osName << endl;
	cout << "화면 너비 : " << displayWidth << endl;
	cout << "저장 공간 용량 : " << memorySize << endl;
}