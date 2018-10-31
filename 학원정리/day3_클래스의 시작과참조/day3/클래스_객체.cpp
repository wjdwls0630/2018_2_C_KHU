#include <iostream>
using namespace std;

//클래스와 객체
//클래스는 자료형, 클래스의 변수 → 객체

/*
//좌표 평면에서 점을 표현하기 위한 구조체 point 정의
struct point
{
	//멤버 변수
	int x;
	int y;
};

//구조체 변수의 값을 출력하기 위한 함수
void print_point(struct point p)
{
	cout << "point = [" << p.x << ", " << p.y << "]" << endl;
}


int main()
{
	//구조체 변수 선언
	struct point pos = { 3, 5 };

	pos.x = 10;
	pos.y = 20;

	print_point(pos);

	return 0;
}*/

// → 이걸 클래스로 만들어 보자
class Point
{
public:					//접근 제어 지시자
	
	//멤버 변수 선언
	int x;
	int y;

	//멤버 함수 선언
	void Print()
	{
		//멤버함수에서는 클래스 내의 멤버 변수를 함수 내에서 선언한 지역변수 처럼 접근할 수 있다.
		cout << "point = [" << x << ", " << y << "]" << endl;				//단 함수 내에서 멤버 변수와 같은 이름의 지역변수를 선언하면 지역변수를 먼저 처리

	}

};

int main()
{
	//객체(클래스 변수) : pos 선언
	//클래스의 자료형 : Point (이렇게 이름만 쓰면 된다)
	Point pos = { 3, 5 };
	Point p2 = { 7, 9 };

	//멤버 접근 연산자(.) 을 이용해 객체의 멤버 변수에 접근
	pos.x = 10;
	pos.y = 20;

	//멤버 접근 연산자(.) 을 이용해 객체의 멤버 함수 호출
	pos.Print();
	p2.Print();

	return 0;
}
