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
		cout << "Sample:: ~Sample() - data " << data << endl;
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
	//동적 메모리 할당을 이용한 배열
	//new 연산자로 동적 메모리 할당을 통해 객체 생성
	Sample *ptr = new Sample(2);												// → new 연산자를 이용했을 때 생성자 호출

	ptr->Print();

	ptr->SetData(10);
	// == (*ptr).SetData(10);

	ptr->Print();					




	//동적으로 할당한 메모리에 대해 소멸을 진행해야한다.
	delete ptr;																// → 소멸자 호출


	return 0;
}