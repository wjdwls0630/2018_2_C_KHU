#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/*
class SampleBase
{
private:
	char* dataBase;

public:
	SampleBase(const char* str = NULL) : dataBase(NULL)
	{
		cout << "SampleBase::SampleBase()" << endl;

		//동적으로 메모리를 할당 받아, 문자열 복사
		int length = strlen(str);
		dataBase = new char[length + 1];
		strcpy(dataBase, str);
	}

	//가상 소멸자
	// → 소멸자에서는 할당 받은 자원을 해제하는 경우가 많으므로
	// 객체가 소멸하는 과정에서 모든 소멸자들의 호출이 필요하다.
	//   따라서 소멸자는 반드시 가상 함수로 작성해서 포인터의 자료형이 아닌 객체의 자료형에 따라 소멸자가 호출 되도록 해야한다.
	virtual ~SampleBase()
	{
		cout << "SampleBase::~SampleBase()" << endl;

		//동적으로 할당 받은 메모리 해제
		delete[] dataBase;
	}

	virtual void Print() const
	{
		cout << "dataBase = " << dataBase << endl;
	}

};

//유도 클래스
class SampleDerived : public SampleBase
{
private:
	char* dataDerived;

public:
	SampleDerived(const char* str1, const char* str2) : SampleBase(str1), dataDerived(NULL)
	{
		cout << "SampleDerived::SampleDerived()" << endl;


		int length = strlen(str2);
		dataDerived = new char[length + 1];
		strcpy(dataDerived, str2);
	}

	~SampleDerived()
	{
		cout << "SampleDerived::~SampleDerived()" << endl;

		delete[] dataDerived;
	}

	virtual void Print()const
	{

		SampleBase::Print();
		cout << "dataDerived = " << dataDerived << endl;
	}
};

int main()
{
	//유도 클래스의 객체를 생성하고, 기초 클래스의 포인터로 가리킨다.
	//new 연산자를 이용해 객체를 생성할 때 생성자가 호출된다.
	//객체 포인터를 생성할 때에는 객체를 생성하는 것이 아니므로 생성자가 호출 되지 않는다.
	SampleBase* ptr = new SampleDerived("Hey, Guys", "Show me the money");

	ptr->Print();

	//이 때 포인터의 자료형인 SampleBase 클래스의 소멸자가 호출 된다. 그래서 SampleDerived 클래스의 소멸자는 호출될 기회를 상실한다.
	//따라서 소멸자를 가상함수로 작성해서 소멸자가 호출 될 때 포인터의 자료형이 아닌 객체의 자료형에 따라 소멸자가 호출 되도록 해야 한다.
	delete ptr;

	return 0;
}
*/

// 좌표 평면에서 점을 표현하는 클래스
class Point
{
private:
	int x;
	int y;

public:
	Point(int x =0, int y = 0) : x(x), y(y) {}

	void Print() const
	{
		cout << "[" << x << "," << y << "]" << endl;
	}

	//객체를 매개 변수로 받아 그 객체의 좌표를 현재 객체의 좌표에 더해서 새로운 객체를 생성하고, 그 객체를 반환하는 멤버 함수.
	Point Add(const Point& ref)
	{
		//새로운 객체를 생성하면서 생성자에 두 좌표를 더한 값을 전달
		//Point obj(x + ref.x, y + ref.y);

		//return obj;

		// → 같은 말로 이렇게 해도 관계 없음
		return Point(x + ref.x, y + ref.y);
	}

	Point operator+(const Point& ref)
	{
		return Point(x + ref.x, y + ref.y);
	}

	// 이렇게 연산자 오버로딩이 가능하다.
	Point operator+(int n)
	{
		return Point(x + n, y + n);
	}
};

int main()
{
	Point p1(3, 5), p2(9,2);


	//출력
	cout << "p1 = ";
	p1.Print();

	cout << "p2 = ";
	p2.Print();

	//좌표 평면의 두 점을 더해서 새로운 점을 생성
	Point p3 = p1.Add(p2);

	cout << "p3 = ";
	p3.Print();

	//연산자 함수(operator function)
	// 연산자의 피연산자가 객체인 경우 연산자도 함수로 취급한다
	// 따라서 피연산자가 객체인 연산자의 경우 오버로딩이 가능하다.
	Point p4 = p1 + p2;
	// → Point p4 = p1.operator+(p2);
	
	cout << "p4 = ";
	p4.Print();

	return 0;
}