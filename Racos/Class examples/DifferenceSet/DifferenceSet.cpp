#include <iostream>
#include "DifferenceSet.h"
using namespace std;


DifferenceSet::DifferenceSet()
{
	a = new int[100];
	b = new int[100];
	aSize = 100;
	bSize = 100;
	memset(a, 0, 100);
	memset(b, 0, 100);
	diff = new int[100];
}

DifferenceSet::DifferenceSet(int a[], int b[], int _as, int _bs)
{
	this->a = new int[_as];
	this->b = new int[_bs];
	
	memcpy(this->a, a, _as*sizeof(int));
	memcpy(this->b, b, _bs*sizeof(int));
	aSize = _as;
	bSize = _bs;

	diff = new int[aSize];
	
}
void DifferenceSet::SetOperands(int a[], int b[], int _as, int _bs)
{
	memcpy(this->a, a, _as*sizeof(int));
	memcpy(this->b, b, _bs*sizeof(int));
	aSize = _as;
	bSize = _bs;
	diff = new int[aSize];
}

void DifferenceSet::InputOperands()
{
	cout << "첫 번째 배열의 원소의 개수를 입력하세요.:";
	cin >> aSize;
	cout << "두 번째 배열의 원소의 개수를 입력하세요.:";
	cin >> bSize;
	a = new int[aSize];
	b = new int[bSize];

	diff = new int[aSize];


	cout << "첫 번째 배열의 원소를 입력하세요.:";
	for(int i=0; i<aSize; i++)
	{
		cin >> a[i];
	}
	cout << "두 번째 배열의 원소를 입력하세요.:";
	for(int i=0; i<bSize; i++)
	{
		cin >> b[i];
	}

}

void DifferenceSet::CalcDiffSet()
{
	int num=0;
	diffSize = aSize;
	bool isCommon = false;
	for(int i=0; i<aSize; i++)
	{
		for(int j=0; j<bSize; j++)
		{
			if(a[i] == b[j])
			{
				diffSize--;
				isCommon = true;
				break;
			}
		}
		if(isCommon == true)
		{
			diff[diffSize++] = a[i];
			isCommon = false;
		}
		
	}

}

void DifferenceSet::Print()
{

	cout << "차집합 원소의 개수 :"<< diffSize <<endl;
	cout << "차집합 원소 : ";
	for(int i=0; i<diffSize; i++)
	{
		cout << diff[i] <<",";
	}
	cout <<endl;
}

DifferenceSet::~DifferenceSet()
{
	delete [] a;
	delete [] b;
	delete [] diff;
}