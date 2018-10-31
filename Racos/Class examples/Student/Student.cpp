#include "Student.h"	
#include <iostream>
using namespace std;

Student::Student()
{
	name = new char[100];
	strcpy(stuNum, "2012000000");
	for(int i=0; i<NUM_LECTURE; i++)
		score[i] = 0.;
	average = 0;
}

Student::Student(char* _name, char* _stuNum, double* _score)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);

	strcpy(stuNum, _stuNum);
	memcpy(score, _score, NUM_LECTURE*sizeof(double));
	CalcAverage();
}

Student::Student(const Student &st)
{

	strcpy(name, st.name);
	strcpy(stuNum, st.stuNum);
	memcpy(score, st.score, NUM_LECTURE*sizeof(double));
	average = st.average;
	order = st.order;
}


void Student::Input(char* _name, char* _stuNum, double* _score)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);

	strcpy(stuNum, _stuNum);
	memcpy(score, _score, NUM_LECTURE*sizeof(double));
	CalcAverage();
}
void Student::CalcAverage()
{
	int sum = 0;
	for(int i=0; i<NUM_LECTURE; i++)
	{
		sum += score[i];
	}

	average = sum / NUM_LECTURE;
	//cout <<"계산된 평균값은 " << average << "입니다." <<endl;
}

void Student::InputOrder(int _order)
{
	order = _order;
	//cout << order <<"등 입니다."<<endl;
}

void Student::Print()
{
	cout << "============================="<<endl;
	cout <<"이름 :"<< name <<endl;
	cout <<"학번 :"<< stuNum <<endl;
	cout <<"평균 :"<< average <<endl;
	cout <<"석차 :"<< order <<endl;
	cout << "============================="<<endl;
}

double Student::GetAverage()
{
	return average;
}

Student::~Student()
{
	delete [] name;
}