#include <iostream>

using namespace std;

class SampleBase													// �� ���� Ŭ����
{
private:
	int dataBase;

public:
	//������
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


class SampleDerived : public SampleBase								// �� ���� Ŭ���� : ����Ŭ�������� ��� ����� ��ӹ��� Ŭ����
{
private :
	int dataDerived;

public:
	//������
	// ���� Ŭ������ �����ڿ��� ���� Ŭ������ ��� ������ �ʱ�ȭ���Ѿ� �� �ǹ��� �ִ�.

	SampleDerived() : dataDerived(0)
	{
		cout << "SampleDerived::SampleDerived()" << endl;
	}

	SampleDerived(int n) : dataDerived(n)
	{
		cout << "SampleDerived::SampleDerived()" << endl;
	}

	// ���� Ŭ������ �����ڿ��� ���� ������� ������ �����Ϸ��� ���� Ŭ������ �⺻ �����ڸ� ȣ�� �Ѵ�.
	// ��� �ϰ� �ʹٸ� �����ڸ� �� ������ �ȴ�.
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
		//���� Ŭ������ ��� �Լ����� ������ �� �ִ� ���� Ŭ������ ������� ���� ����
		// �� public, protected					//private ����� ���� �� �� ����.
		// cout << "dataBase is = " << (error)dataBase << endl;
		PrintBase();
		cout << "dataDerived is =" << dataDerived << endl;
	}
};

int main()
{
	//���� Ŭ������ ��ü ����
	//1.���� Ŭ������ ������ ����
	//2.���� Ŭ������ ������ ����
	SampleDerived obj(10, 20);

	obj.PrintDerived();








	return 0;
}