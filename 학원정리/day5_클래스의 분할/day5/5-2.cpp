#include <iostream>
using namespace std;

class Sample
{
private:
	int data;

public: 
	//기본 생성자(default constructor)
	// 클래스 내에 생성자가 하나도 없는 경우 컴파일러가 자동으로 추가해주는 생성자
	// → Sample() { }

	//객체를 생성할 때 값을 전달하지 않고 생성할 수 있도록 기본생성자의 역할을 수행할 생성자를 반드시 작성해야 한다.
	// sample() : data(0) {}
	// sample(int n = 0) : data(n) {}

	//소멸자도 마찬가지
	// → ~Sample() { }						// → 매개변수가 없기 때문에 대부분의 경우 기본 소멸자로도 충분하다.

	//설정자와 접근자
	void SetData(int n) { data = n; }
	int GetData() { return data; }

	//출력
	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	//객체 생성
	Sample obj;

	return 0;
}