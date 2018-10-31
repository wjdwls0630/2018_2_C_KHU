#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	//������
	Point(int x = 0, int y = 0) : x(x) ,y(y) {}

	void Print() const { cout << "[" << x << "," << y << "]" << endl; }

	//Point operator+ (const Point& ref)
	//{
	//	return Point(x + ref.x, y+ref.y);
	//}

	//friend �Լ� : ���� �Լ��� �� Ŭ������ private ����� ���������� �� �ֵ��� ���
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

//��Ʈ�� ���� ������ �����ε�(<<)
//��ȯ ���� �ڱ� ������
//ù��° �Ű������� ostream��ü(cout), �ι�° �Ű������� ����� ��
ostream& operator<<(ostream& os, const Point& ref)								// os = cout,ref = ����� ��
{
	os << "[" << ref.x << "," << ref.y << "]";
	return os;
}

//��Ʈ�� ���� ������ �����ε�(>>)
// ��ȯ ���� istream��ü
// ù��° �Ű� ������ istream ��ü(cin), �ι�° �Ű������� �Է� �޾� ������ ��ü
istream& operator>>(istream& is, Point& ref)
{
	is >> ref.x >> ref.y;
	return is;
}

int main()
{
	//��ü ����
	Point p1(1, 3), p2(5, 2);

	Point p3 = p1 + p2;
	// �� Point p3 = p1.operator+(p2)									����Լ� ����� �����ε�(�̰� ���� ������ ������ �ؿ� �ɷ�)
	// �� Point p3 = operator+(p1,p2)									�����Լ� ����� �����ε�

	Point p4 = p1 - p2;

	p4.Print();

	// p1== p2    p1.operator==(p2)
	if (p1 == p2)
		cout << "Same Points!" << endl;
	else
		cout << "Different Points!" << endl;


	Point p5 = -p1;
	// �� Point p5 = p1.operator-();
	// �� Point p5 = operator-(p1);
	cout << "p5 = ";
	p5.Print();

	Point p6 = p1 + 3;
	cout << "p6 = ";
	p6.Print();

	//��ȯ ��Ģ
	Point p7 = 3 + p1;
	// Point p7 =3.operator+(p1);					ERROR!
	// Point p7 = operator+(3,p1);						�� ��¿ �� ���� �����Լ� ����� �����ε��� �ؾ� �Ѵ�.

	cout << "p7 = ";
	p7.Print();


	// ��Ʈ�� ���� ������ �����ε��� �ؼ� cout ��ü�� ���� Point ��ü�� �ٷ� ����Ѵ�.
	cout << "p7= "<< p7 << endl;
	// cout.operator<<("p7 = ").operator<<(p7).operator<<(endl);
	// cout ��ü�� ��Ʈ�� ���� �����ڸ� �̿��� ����� �� ���� ���� ���޾� ����� �� �ִ�.
	// �̰� ������������ ��Ʈ�� ���� �������Լ����� cout ��ü�� ��ȯ �ϱ� ����


	//cout << p7;
	// �� cout.operator<<(p7);								 cout��ü�� ���ο� �������Լ��� �߰��� �� ����.
	// �� operator<<(cout,p7);								���� ���� �Լ� ����� ������ �����ε��� �Ѵ�.

	Point p8;
	cin >> p8;
	cout << "p8 = " << p8 << endl;
	// cin.operator>>(c8);
	// operator>>(cin, c8);

	return 0;
}