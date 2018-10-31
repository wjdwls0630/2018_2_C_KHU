#include <iostream>

using namespace std;

//																								friend;;
/*
class Sample
{
private : 
	int data;

	//friend 선언
	// → friend 클래스로 선언된 클래스의 멤버 함수에서 이 클래스의 private 멤버에 접근할 수 있게 된다.
	friend class FriendSample;
	friend void PrintData(const Sample& ref);

public :
	Sample(int n = 0) : data(n) {}
	int GetData() const { return data; }
	void Print() const { cout << "data = " << data << endl; }

};

class FriendSample
{
private:
	int value;

public:
	class FriendSample(int n = 0) : value(n) {}
	void Print() const { cout << "value = " << value << endl; }

	//
	void PrintSample(const Sample& ref)

	{
		cout << "Sample::data = " << ref.data << endl;											//원래 ref.GetData 로 써야 되지만 friend 선언 되었기 때문에 ref.data 이렇게 써도 된다.
	}


};

void PrintData(const Sample& ref)
{
	cout << "Sample::data = " << ref.GetData() << endl;											//원래 ref.GetData()로 써야 되지만 friend 선언 되었기 때문에 ref.data로 써도 된다.		
}

int main()
{
	Sample obj(3);
	class FriendSample objUse(5);

	objUse.PrintSample(obj);

	PrintData(obj);

	return 0;
}
*/

//																					static;;
class Sample
{
private : 
	int data;
	//정적 멤버 변수
	//클래스로 생성된 모든 객체에서 공유한다.

	// → 정적으로 선언된 멤버 변수는 객체와는 무관한 변수로 객체의 생성과는 상관없이 프로그램이 실행되면 정적 멤버 변수 생성
	// → 생성자에서 초기화하지 못하고 클래스 외부에서 초기화 한다. →→ 1)
	static int count;


public:
	Sample(int n = 0) : data(n) { count++; }
	~Sample() { count--;  }								//count는 객체가 생성될 때 마다 하나씩 증가 소멸될때마다 하나씩 감소한다.
	void Print() const { cout << "data = " << data << endl; }
	void PrintCount() const { cout << "count = " << count << endl; }

	//정적 멤버 함수
	// → 객체가 생성되기 전에 호출 할 수 있는 멤버 함수
	// → 정적 멤버 함수에서는 정적 멤버에만 접근할 수 있다.
	// → 정적 멤버 함수에서는 this 포인터를 사용할 수 없다.
	static void StaticPrintCount2()
	{
		cout << "Sample::count = " << count << endl;
	}
};

//1) 정적 멤버 변수의 초기화
int Sample::count = 0;

int main()
{
	Sample::StaticPrintCount2();											// → 객체가 선언되기 전에 정적 멤버 함수를 호출 할 수 있다.
	
	Sample obj1, obj2, obj3;

	obj1.PrintCount();														//obj2, obj3 로 해도 상관없이 같다.

	Sample obj4;

	obj2.StaticPrintCount2();												// → 객체를 선언 한 후에도 마찬가지로 호출 할 수도 있고 이렇게 하나의 멤버 함수로써 호출 할 수도 있다.

	return 0;
}