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
/*
int main()
{
	Sample *ptr = new Sample[5];

	for (int i = 0; i, 5; i++)
		ptr[i].SetData(i + 11);

	for (int i = 0; i, 5; i++)
		ptr[i].Print();
		// → (*(ptr + i)).Print();			// 이건 값 즉 객체이기 때문에 멤버 접근 연산자로 접근이 가능
		// → *(ptr + i) -> Print();			// 이건 포인터 이기 때문에 간접 멤버 접근 연산자로 접근해야됨



	//delete만 쓰면 첫번째 원소만 제거 된다.
	delete[] ptr;


	return 0;
}*/

int main()
{
	//클래스 포인터의 배열 선언
	Sample* array[5];

	//포인터의 배열에 각 원소에 동적 메모리 할당을 통해 객체 생성
	for (int i = 0; i < 5; i++)
		array[i] = new Sample(i + 1);

	for (int i = 0; i < 5; i++)
		array[i]->Print();
		// → (*(array + i)) -> Print();


	for (int i = 0; i < 5; i++)
		delete array[i];



	return 0;
}