#include <iostream>
#include <cstring>
using namespace std;
/*
class SampleBase
{
private:
	int dataBase;

public:
	SampleBase(int n = 0): dataBase(n) {}

	void PrintBase() 
	{
		cout << "dataBase = " << dataBase << endl;
	}
};

class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:
	SampleDerived() : SampleBase(0), dataDerived(0) {}

	SampleDerived(int n1 = 0, int n2 = 0) : SampleBase(n1), dataDerived(n2) {}

	void PrintDerived() const
	{
		cout << "dataDerived = " << dataDerived << endl;
	}


};
*/
/*
int main()
{
	SampleBase* ptr = new SampleDerived(10,20);

	//함수를 호출할 때 어떤 함수를 호출할 것인가결정하는 것은 포인터의 자료형이다.
	//따라서 기초 클래스의 포인터로 유도클래스의 객체를 가리킬 수는 있지만 유도클래스의 멤버에는 접근할 수 없다.
	ptr->PrintDerived();										//ERROR


	delete ptr;


	return 0;
}
	*/
/*
int main()
{
	SampleDerived obj(10, 30);
	SampleBase& ref = obj;

	ref.PrintBase();

	//ref.PrintDerived(); 는 에러다.




	return 0;
}
*/

//함수 오버라이딩(function overriding, 함수재정의)
// → 유도 클래스에서 기초 클래스의 멤버 함수를 다시 정의해 덮어 쓸 수 있다.

//객체지향 프로그래밍에서 다형성을 구현
// 1. 함수 오버로딩(function overloading)
// 2. 매개변수의 기본 값(defalut parameter)
// 3. 함수 오버라이딩(function overriding)

//함수를 호출할 때 어떤 함수를 호출할 것인지 결정하는 방식
//1. 정적 바인딩
// → 컴파일 단계에서 호출하는 변수, 포인터, 참조자의 자료형에 따라 호출할 함수를 결정하는 방식
// → 일반적으로 함수를 호출할 때 이 방식에 따라 호출할 함수를 결정한다.

//2. 동적바인딩
// → 실행 단계에서 객체의 자료형에 따라 호출할 함수를 결정하는 방식
// → 동적 바인딩으로 호출할 함수는 정의할 때 지정해야 한다.
// → 동적 바인딩으로 호출되는 함수를 가상 함수(virtual function)이라 한다.  → virtual 키워드를 사용한다.	

class SampleBase
{
private:
	int dataBase;

public:
	SampleBase(int n = 0) : dataBase(n) {}

	virtual void Print() const											
	//가상함수

	{
		cout << "dataBase = " << dataBase << endl;
	}
};

class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:
	SampleDerived() : SampleBase(0), dataDerived(0) {}

	SampleDerived(int n1 = 0, int n2 = 0) : SampleBase(n1), dataDerived(n2) {}

	virtual void Print() const
	{
		//오버라이딩된 기초 클래스의 멤버 함수를 호출 할 때는 클래스 이름과
		//범위 지정 연산자 :: 를 이용한다.
		SampleBase::Print();
		cout << "dataDerived = " << dataDerived << endl;
	}


};

int main()
{
	//객체 생성
	SampleBase objBase(10);
	SampleDerived objDerived(20, 30);				//함수 오버라이딩 상태에서는 넘겨주는 값을 통해 어떤 함수를 쓸것인지 결정한다.

	//참조자
	SampleBase& refBase = objBase;
	SampleBase& refDerived = objDerived;


	objBase.Print();
	objDerived.Print();

	cout << "------------------------------------------" << endl;

	//가상 함수
	// → 동적 바인딩으로 호출할 함수를 결정
	// → 실행 단계에서 객체의 자료형에 따라 어떤 함수를 호출할 것인지 결정
	refBase.Print();
	refDerived.Print();

	return 0;
}