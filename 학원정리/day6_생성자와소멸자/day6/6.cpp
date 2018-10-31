#include <iostream>


using namespace std;

class Sample
{
private:
	//멤버변수
	int data;

public:
	//멤버 함수
	//생성자와 소멸자
	Sample(int n = 0) : data(n)
	{
		cout << "Sample::Sample(int n) - data " << data << endl;
	}

	~Sample()
	{
		cout << "Sample:: ~Sample() - data "<< data << endl;
	}

	//설정자와 접근자, 출력함수
	void SetData(int n) { data = n; }
	int GetData() { return data; }

	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	Sample array[5];
	// → 각각의 객체 즉 각각의 원소가 생성자와 소멸자를 부르게 된다.

	for (int i = 0; i < 5; i++)
		array[i].SetData(i + 1);

	for (int i = 0; i < 5; i++)
		array[i].Print();
		// → (*(array + 1)).Print();










	return 0;
}