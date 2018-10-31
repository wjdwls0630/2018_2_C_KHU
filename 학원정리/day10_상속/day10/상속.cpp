#include <iostream>

using namespace std;

class SampleBase													// ← 기초 클래스
{
private:
	int dataBase;

public:
	//생성자
	SampleBase() : dataBase(0)
	{
		cout << "SampleBase::SampleBase()" << endl;
	}


	SampleBase(int n) : dataBase(n)
	{
		cout << "SampleBase::SampleBase(int n)" << endl;
	}

	~SampleBase()
	{
		cout << "SampleBase::~SampleBase()" << endl;
	}

	void PrintBase() const
	{
		cout << "dataBase is =" << dataBase << endl;
	}
};


class SampleDerived : public SampleBase								// ← 유도 클래스 : 기초클래스에서 모든 멤버를 상속받은 클래스
{
private :
	int dataDerived;

public:
	//생성자
	// 유도 클래스의 생성자에서 기초 클래스의 멤버 변수도 초기화시켜야 할 의무가 있다.

	SampleDerived() : dataDerived(0)
	{
		cout << "SampleDerived::SampleDerived()" << endl;
	}

	SampleDerived(int n) : dataDerived(n)
	{
		cout << "SampleDerived::SampleDerived()" << endl;
	}

	// 유도 클레스의 생성자에서 따로 명시하지 않으면 컴파일러는 기초 클래스의 기본 생성자를 호출 한다.
	// 명시 하고 싶다면 생성자를 써 넣으면 된다.
	SampleDerived(int n1, int n2) : SampleBase(n1), dataDerived(n2)
	{
		cout << "SampleDerived::SampleDerived()" << endl;
	}

	~SampleDerived()
	{
		cout << "SampleBase::~SampleDerived()" << endl;
	}

	void PrintDerived() const
	{
		//유도 클래스의 멤버 함수에서 접근할 수 있는 기초 클래스의 멤버들의 접근 제어
		// → public, protected					//private 멤버는 접근 할 수 없다.
		// cout << "dataBase is = " << (error)dataBase << endl;
		PrintBase();
		cout << "dataDerived is =" << dataDerived << endl;
	}
};

int main()
{
	//유도 클래스의 객체 생성
	//1.기초 클래스의 생성자 실행
	//2.유도 클래스의 생성자 실행
	SampleDerived obj(10, 20);

	obj.PrintDerived();








	return 0;
}