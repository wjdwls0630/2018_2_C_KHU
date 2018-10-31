#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

/*
class Sample
{
private : 
	int data;

public:
	Sample(int n = 0):data(n) {}

	void doAction()
	{
		int data = 10;

		//this 포인터 : 멤버 변수에서 객체를 가리키는 포인터
		cout << "data = " << this->data << endl;
	}
	//객체의 포인터를 구하는 멤버 함수
	Sample* GetThisPointer() { return this; }

	//자기 참조자를 반환하는 함수
	Sample& Adder(int n)
	{
		data += n;

		//this - 객체를 가리키는 포인터
		//*this - 객체를 가리키는 포인터에 저장된 값 - 객체 그 자신 = 자기 참조자
		return *this;
	}

	void Print()
	{
		cout << "data = " << data << endl;

	}





};

int main()
{
	Sample obj(10);

	Sample* ptr = &obj;
	//Sample* ptr = obj.GetThisPointer;


	ptr->Print();

	obj.Adder(3).Print();    // >> obj.Adder(3)은 참조자 즉 객체이므로 거기에 참조연산자를 사용가능하다.


	return 0;
}
*/

/*
class Sample
{
private:
	int data;
	//int x;

public:
	//생성자
	Sample(int n = 0) :data(n) {}

	//복사 생성자
	// 해당 클래스의 객체를 받아 객체를 생성하는 생성자
	// → 클래스에 복사 생성자가 없으면 기본 복사 생성자를 자동으로 추가한다.
	// 매개변수로 넘어온 객체의 멤버 변수로 멤버변수의 값을 설정한다.
	// 보통 자동으로 생성
	// Sample(const Sample& copy) : data(copy.data), x(copy.x) {}

	void Print()
	{
		cout << "data = " << data << endl;
	}

	

};

int main()
{
	//객체 생성
	Sample obj = 10;

	int num = 10;

	Sample obj2 = obj;

	obj2.Print();

	return 0;
}
*/

/*
//동적 메모리 할당을 통해 저장공간을 확보하고 문자열을 저장하는 클래스
class Sample
{
private:
	char* data;

public:
	//생성자
	Sample() : data(NULL) {}

	Sample(const char* str) : data(NULL)
	{
		//동적 메모리 할당을 위해 문자열의 길이 계산
		int length = strlen(str);

		//동적 메모리 할당
		data = new char[length+1];				// >> null문자가 들어갈 공간

		//문자열을 복사
		strcpy(data, str);
	}

	//기본 복사 생성자
	//Sample(const Sample& copy) : data(copy.data) {}
	
	Sample(const Sample& copy) : data(NULL)					//얕은 복사를 깊은 복사로 만들기 위한 기본 복사 생성자의 변형
	{
		int length = strlen(copy.data);

		//동적 메모리 할당
		data = new char[length + 1];				// >> null문자가 들어갈 공간

													//문자열을 복사
		strcpy(data, copy.data);
	}


	//소멸자 : 객체에서 할당 받은 시스템 자원을 해제
	~Sample()
	{
		//동적으로 할당 받은 메모리는 반드시 해제한다.
		//객체에서는 소멸자에서 할당 받은 메모리를 해제한다.
		//메모리를 해제할 때는 할당 받은 메모리가 있는지 확인 후 해제하는 것이 좋다
		if(data)
			delete[] data;
	}

	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	//객체 생성
	Sample obj;

	Sample obj1("hello world!");

	Sample obj2 = obj1;						// → 이렇게 되면 obj2에 obj1의 주소를 복사한 것이기 때문에 소멸될때 오류가 된다.

	obj1.Print();
	obj2.Print();







	return 0;
}
*/


class Sample
{
private : 
	int data;
public : 
	//변환 생성자 : 다른 자료형의 값을 Sample 객체로 형 변환하는 데 호출되는 생성자
	Sample(int n = 0) : data(n) {}

	//형변환 연산자 오버로딩
	// 1)
	operator int()
	{
		return data;
	}

	void Print() { cout << "data = " << data << endl; }

};

int main()
{
	//객체 생성
	Sample obj;

	obj = 3;
	// → 3의 자료형을 Sample로 바꾸려 한다.
	// → obj = (Sample)3;
	// → obj = Sample(3);

	int num = obj;				
	// num = (int)obj; 로 만들려고 하지만 (int)라는 연산자는 없으므로 1) 의 생성이 필요하다


	obj.Print();

	cout << "num = " << num << endl;

	return 0;
}

