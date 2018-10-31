#include <iostream>
#include "Student.h"
using namespace std;

void CalcOrder(Student *stu, int size);

#define NUM_STU 3
#define NUM_LECTURE 3
int main()
{
	double score1[NUM_LECTURE]={100,80,50};
	double score2[NUM_LECTURE]={50,30,15};
	double score3[NUM_LECTURE]={100,100,100};
	Student stu[NUM_STU];

	stu[0].Input("Kim", "2008000000", score1);
	stu[1].Input("Lee", "2012000000", score2);
	stu[2].Input("Park", "2006000000", score3);

	CalcOrder(stu, NUM_STU);
	for(int i=0; i<NUM_STU; i++)
	{
		stu[i].InputOrder(i+1);
		stu[i].Print();
	}
	return 0;
}

void CalcOrder(Student *stu, int size)
{
	int *avr = new int [size];
	for(int i=0; i<size; i++)
		avr[i] = stu[i].GetAverage();
	
	Student temp;
	for(int i=0 ; i < 2 ; i++)
    {
        for(int j=i+1; j < 3 ; j++)
        {
            if( avr[i] < avr[j])
            {
				temp = stu[j];
                stu[j] = stu[i];
				stu[i] = temp;
            }
        }
    }	
}