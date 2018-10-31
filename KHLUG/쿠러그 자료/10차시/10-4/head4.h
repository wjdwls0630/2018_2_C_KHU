#pragma once
#include <iostream>
using namespace std;



class Score
{
private :
	int math;
	int sci;
	int eng;
	int korean;
	double avg;
public :
	Score(int math1, int sci1, int eng1, int korean1);
	void print();
};


Score::Score(int math1, int sci1, int eng1, int korean1)
{
	math = math1;
	sci = sci1;
	eng = eng1;
	korean = korean1;
	avg = (double)(math + sci + eng + korean) / 4;

}


void Score::print()
{
	cout << "수학 : " << math << endl;
	cout << "과학 : " << sci << endl;
	cout << "영어 : " << eng << endl;
	cout << "국어 : " << korean << endl;
	cout << "평균 : " << avg << endl << endl;

}