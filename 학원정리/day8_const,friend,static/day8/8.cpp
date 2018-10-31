#include <iostream>
using namespace std;

	//																				const;;

/*
int main()
{
	int x = 10;
	int y = 20;

	//포인터의 상수화
	//자료형 앞에 const키워드를 붙이는 경우 포인터가 가리키는 주소에 저장된 값이 상수
	const int* ptr1 = &x;
	// *ptr1 = 20 은 error
	x = 20;				//은 가능

	ptr1 = &y;			//도 가능


	//자료형 뒤에 const 키워드를 붙이는 경우 포인터에 저장된 주소가 상수
	int* const ptr2 = &x;
	*ptr2 = 20;
	//ptr2 = &y; 는 에러

	//자료형의 앞과 뒤에 const키워드를 붙이는 경우 둘다 상수
	const int* const ptr3 = &x;

	//참조자 : 변수 등의 저장공간에 붙이는 별명
	int& ref1 = x;

	ref1 = 30;
	
	//참조자가 참조하는 저장 공간에 저장된 값이 상수
	const int& ref2 = y;

	return 0;
}
*/

class Sample
{
private:
	int data;
	const int MAX;		//const 멤버 변수 : 생성자의 멤보 초기화 리스트에서만 초기화 가능

public:
	Sample() : data(), MAX(256) {}

	Sample(int n = 0): data(n), MAX(256) 
	{
		SetData(n);
	}

	void SetData(int n) 
	{
		data = (n > MAX) ? MAX : n;
	}

	//const 멤버 함수
	//const 멤버 함수에서는 멤버 변수의 값을 변경 할 수 없다.
	// 또한 const 멤버 함수가 아닌 다른 멤버 함수를 호출할 수 없다.
	// 함수 내에서 멤버 변수의 값을 변경하지 않는 멤버함수는 const로 선언하는 것이 좋다.
	void Print() const
	{
		cout << "data = " << data << endl;
	}

	//const 선언 여부도 함수 오버로딩의 조건이 된다.
	void DoIt()
	{
		data += 10;
		Print();
	}

	void DoIt() const
	{
		Print();
	}

};

int main()
{
	// const 객체 : 멤버변수의 값을 변경할 수 없는 객체
	// → 멤버함수를 호출할 수 없다. → const 멤버 함수만 호출할 수 있다.
	const Sample obj1(300);

	obj1.Print();

	return 0;
}