#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	//생성자
	Point(int x = 0, int y = 0) : x(x) ,y(y) {}

	void Print() const { cout << "[" << x << "," << y << "]" << endl; }

	//Point operator+ (const Point& ref)
	//{
	//	return Point(x + ref.x, y+ref.y);
	//}

	//friend 함수 : 전역 함수가 이 클래스의 private 멤버에 직접접근할 수 있도록 허용
	friend Point operator+(const Point& p1, const Point& p2);

	Point operator-(const Point& ref)
	{
		return Point(x - ref.x, y - ref.y);
	}

	bool operator==(const Point& ref)
	{
		return (x == ref.x && y == ref.y);
	}

	Point operator-()
	{
		return Point(-x, -y);
	}


	Point operator+(int n)
	{
		return Point(x + n, y + n);
	}



	friend Point operator+(int n, const Point& ref);
	friend ostream& operator<<(ostream& os, const Point& ref);
	friend istream& operator>>(istream& is, Point& ref);




};

Point operator+(const Point& p1, const Point& p2)
{
	return Point(p1.x + p2.x, p1.y+p2.y);
}

Point operator+(int n, const Point& ref)
{
	return Point(ref.x + n, ref.y + n);
}

//스트림 삽입 연산자 오버로딩(<<)
//반환 값은 자기 참조자
//첫번째 매개변수는 ostream객체(cout), 두번째 매개변수는 출력할 값
ostream& operator<<(ostream& os, const Point& ref)								// os = cout,ref = 출력할 값
{
	os << "[" << ref.x << "," << ref.y << "]";
	return os;
}

//스트림 추출 연산자 오버로딩(>>)
// 반환 값은 istream객체
// 첫번째 매개 변수는 istream 객체(cin), 두번째 매개변수는 입력 받아 저장할 객체
istream& operator>>(istream& is, Point& ref)
{
	is >> ref.x >> ref.y;
	return is;
}

int main()
{
	//객체 생성
	Point p1(1, 3), p2(5, 2);

	Point p3 = p1 + p2;
	// → Point p3 = p1.operator+(p2)									멤버함수 기반의 오버로딩(이걸 먼저 적용함 없으면 밑에 걸로)
	// → Point p3 = operator+(p1,p2)									전역함수 기반의 오버로딩

	Point p4 = p1 - p2;

	p4.Print();

	// p1== p2    p1.operator==(p2)
	if (p1 == p2)
		cout << "Same Points!" << endl;
	else
		cout << "Different Points!" << endl;


	Point p5 = -p1;
	// → Point p5 = p1.operator-();
	// → Point p5 = operator-(p1);
	cout << "p5 = ";
	p5.Print();

	Point p6 = p1 + 3;
	cout << "p6 = ";
	p6.Print();

	//교환 법칙
	Point p7 = 3 + p1;
	// Point p7 =3.operator+(p1);					ERROR!
	// Point p7 = operator+(3,p1);						← 어쩔 수 없이 전역함수 기반의 오버로딩을 해야 한다.

	cout << "p7 = ";
	p7.Print();


	// 스트림 삽입 연산자 오버로딩을 해서 cout 객체를 통해 Point 객체를 바로 출력한다.
	cout << "p7= "<< p7 << endl;
	// cout.operator<<("p7 = ").operator<<(p7).operator<<(endl);
	// cout 객체와 스트림 삽입 연산자를 이용해 출력할 때 여러 값을 연달아 출력할 수 있다.
	// 이게 가능한이유는 스트림 삽입 연산자함수에서 cout 객체를 반환 하기 때문


	//cout << p7;
	// → cout.operator<<(p7);								 cout객체에 새로운 연산자함수를 추가할 수 없다.
	// → operator<<(cout,p7);								따라서 전역 함수 기반의 연산자 오버로딩을 한다.

	Point p8;
	cin >> p8;
	cout << "p8 = " << p8 << endl;
	// cin.operator>>(c8);
	// operator>>(cin, c8);

	return 0;
}