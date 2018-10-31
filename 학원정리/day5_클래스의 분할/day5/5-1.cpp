#include <iostream>
using namespace std;

//클래스 : 어떤 객체를 표현하기 위해 정의하는 자료형
class Sample
{
	// 멤버 변수를 정의 : private 영역에 정의
private: 
	int data;

public:
	//멤버 함수

	//생성자와 소멸자 
	// → 객체가 생성되고 소멸될 때 자동으로 호출된다.
	// → 특별한 형태의 멤버함수(멤버 함수의 이름이 정해져 있고, 반환 값이 없다.)
	// → 소멸자는 매개 변수가 없다.

	//생성자 : 객체가 생성될 때 자동으로 호출되는 멤버 함수
	// → "멤버 변수들의 초기화"

	//생성자도 함수 오버로딩 가능

	Sample() : data(0)
	{
		cout << "Sample::Sample()" << endl;
	}

	Sample(int n) : data(n)														//함수이름			(만약 main함수에서 클래스 Sample이 시작되었는데 n값이 안온다면 n은 0이 된다.)
	// int data(n);
	// int data = n;			//변수의 생성과 초기화를 동시에 함 → 멤버 초기화 리스트 생성자가 실행되기 전에 실행되므로 생성자에서 멤버 변수를 초기화 하는 것 보다 더 효율적
	{
								//data = n;				//생성해 놓은 변수에 값을 대입 → 이렇게 해도 되는데 비효율적
		cout << "Sample::Sample(int n)" << endl;
	}


	//소멸자 : 객체가 소멸될 때 자동으로 호출되는 멤버 함수
	// → 객체에서 할당받은 시스템 자원의 반환
	~Sample()														//물결후 함수이름
	{
		cout << "Sample::~Sample() - data" << data << endl;

	}

	//설정자 : 멤버 변수를 설정하기 위한 멤버 함수						//외부에서 멤버변수에 접근하기 위한 것
	void SetData(int n) { data = n; }

	//접근자 : 멤버 변수의 값을 읽어오기 위한 멤버 함수

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

	//지역 변수 : 스택 영역에 생성
	// 스택은 FILO(FIRST IN LAST OUT) 구조의 메모리 영역
	// 따라서 변수가 생성된 순서의 역순으로 소멸한다.
	Sample obj1;
	Sample obj2 = 10;					//Sample 클래스의 객체 obj를 생성				시작하면서 생성자에 대입 n에 10을 대입한다.
	//Sample obh[10];

	

	obj1.Print();
	obj2.Print();





	return 0;
}