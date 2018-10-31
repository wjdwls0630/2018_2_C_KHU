#include <iostream>
using namespace std;

class NameAge
{
public:
	char name[81] = { 0, };
	int age;

	void Print()
	{
		cout << "이름 : " << name << " 나이 : " << age << endl;
	}

};

int main()
{
	char name2[81] = "Michael jackson";
	NameAge pos;

	pos.age = 25;
	
	for (int i = 0; i < 81; i++)
		pos.name[i] = name2[i];

	pos.Print();

	return 0;
}