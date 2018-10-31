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

		//�������� �޸𸮸� �Ҵ� �޾�, ���ڿ� ����
		int length = strlen(str);
		dataBase = new char[length + 1];
		strcpy(dataBase, str);
	}

	//���� �Ҹ���
	// �� �Ҹ��ڿ����� �Ҵ� ���� �ڿ��� �����ϴ� ��찡 �����Ƿ�
	// ��ü�� �Ҹ��ϴ� �������� ��� �Ҹ��ڵ��� ȣ���� �ʿ��ϴ�.
	//   ���� �Ҹ��ڴ� �ݵ�� ���� �Լ��� �ۼ��ؼ� �������� �ڷ����� �ƴ� ��ü�� �ڷ����� ���� �Ҹ��ڰ� ȣ�� �ǵ��� �ؾ��Ѵ�.
	virtual ~SampleBase()
	{
		cout << "SampleBase::~SampleBase()" << endl;

		//�������� �Ҵ� ���� �޸� ����
		delete[] dataBase;
	}

	virtual void Print() const
	{
		cout << "dataBase = " << dataBase << endl;
	}

};

//���� Ŭ����
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
	//���� Ŭ������ ��ü�� �����ϰ�, ���� Ŭ������ �����ͷ� ����Ų��.
	//new �����ڸ� �̿��� ��ü�� ������ �� �����ڰ� ȣ��ȴ�.
	//��ü �����͸� ������ ������ ��ü�� �����ϴ� ���� �ƴϹǷ� �����ڰ� ȣ�� ���� �ʴ´�.
	SampleBase* ptr = new SampleDerived("Hey, Guys", "Show me the money");

	ptr->Print();

	//�� �� �������� �ڷ����� SampleBase Ŭ������ �Ҹ��ڰ� ȣ�� �ȴ�. �׷��� SampleDerived Ŭ������ �Ҹ��ڴ� ȣ��� ��ȸ�� ����Ѵ�.
	//���� �Ҹ��ڸ� �����Լ��� �ۼ��ؼ� �Ҹ��ڰ� ȣ�� �� �� �������� �ڷ����� �ƴ� ��ü�� �ڷ����� ���� �Ҹ��ڰ� ȣ�� �ǵ��� �ؾ� �Ѵ�.
	delete ptr;

	return 0;
}
*/

// ��ǥ ��鿡�� ���� ǥ���ϴ� Ŭ����
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

	//��ü�� �Ű� ������ �޾� �� ��ü�� ��ǥ�� ���� ��ü�� ��ǥ�� ���ؼ� ���ο� ��ü�� �����ϰ�, �� ��ü�� ��ȯ�ϴ� ��� �Լ�.
	Point Add(const Point& ref)
	{
		//���ο� ��ü�� �����ϸ鼭 �����ڿ� �� ��ǥ�� ���� ���� ����
		//Point obj(x + ref.x, y + ref.y);

		//return obj;

		// �� ���� ���� �̷��� �ص� ���� ����
		return Point(x + ref.x, y + ref.y);
	}

	Point operator+(const Point& ref)
	{
		return Point(x + ref.x, y + ref.y);
	}

	// �̷��� ������ �����ε��� �����ϴ�.
	Point operator+(int n)
	{
		return Point(x + n, y + n);
	}
};

int main()
{
	Point p1(3, 5), p2(9,2);


	//���
	cout << "p1 = ";
	p1.Print();

	cout << "p2 = ";
	p2.Print();

	//��ǥ ����� �� ���� ���ؼ� ���ο� ���� ����
	Point p3 = p1.Add(p2);

	cout << "p3 = ";
	p3.Print();

	//������ �Լ�(operator function)
	// �������� �ǿ����ڰ� ��ü�� ��� �����ڵ� �Լ��� ����Ѵ�
	// ���� �ǿ����ڰ� ��ü�� �������� ��� �����ε��� �����ϴ�.
	Point p4 = p1 + p2;
	// �� Point p4 = p1.operator+(p2);
	
	cout << "p4 = ";
	p4.Print();

	return 0;
}