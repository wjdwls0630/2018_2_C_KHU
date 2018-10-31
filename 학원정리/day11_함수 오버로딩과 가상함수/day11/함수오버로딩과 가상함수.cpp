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

	//�Լ��� ȣ���� �� � �Լ��� ȣ���� ���ΰ������ϴ� ���� �������� �ڷ����̴�.
	//���� ���� Ŭ������ �����ͷ� ����Ŭ������ ��ü�� ����ų ���� ������ ����Ŭ������ ������� ������ �� ����.
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

	//ref.PrintDerived(); �� ������.




	return 0;
}
*/

//�Լ� �������̵�(function overriding, �Լ�������)
// �� ���� Ŭ�������� ���� Ŭ������ ��� �Լ��� �ٽ� ������ ���� �� �� �ִ�.

//��ü���� ���α׷��ֿ��� �������� ����
// 1. �Լ� �����ε�(function overloading)
// 2. �Ű������� �⺻ ��(defalut parameter)
// 3. �Լ� �������̵�(function overriding)

//�Լ��� ȣ���� �� � �Լ��� ȣ���� ������ �����ϴ� ���
//1. ���� ���ε�
// �� ������ �ܰ迡�� ȣ���ϴ� ����, ������, �������� �ڷ����� ���� ȣ���� �Լ��� �����ϴ� ���
// �� �Ϲ������� �Լ��� ȣ���� �� �� ��Ŀ� ���� ȣ���� �Լ��� �����Ѵ�.

//2. �������ε�
// �� ���� �ܰ迡�� ��ü�� �ڷ����� ���� ȣ���� �Լ��� �����ϴ� ���
// �� ���� ���ε����� ȣ���� �Լ��� ������ �� �����ؾ� �Ѵ�.
// �� ���� ���ε����� ȣ��Ǵ� �Լ��� ���� �Լ�(virtual function)�̶� �Ѵ�.  �� virtual Ű���带 ����Ѵ�.	

class SampleBase
{
private:
	int dataBase;

public:
	SampleBase(int n = 0) : dataBase(n) {}

	virtual void Print() const											
	//�����Լ�

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
		//�������̵��� ���� Ŭ������ ��� �Լ��� ȣ�� �� ���� Ŭ���� �̸���
		//���� ���� ������ :: �� �̿��Ѵ�.
		SampleBase::Print();
		cout << "dataDerived = " << dataDerived << endl;
	}


};

int main()
{
	//��ü ����
	SampleBase objBase(10);
	SampleDerived objDerived(20, 30);				//�Լ� �������̵� ���¿����� �Ѱ��ִ� ���� ���� � �Լ��� �������� �����Ѵ�.

	//������
	SampleBase& refBase = objBase;
	SampleBase& refDerived = objDerived;


	objBase.Print();
	objDerived.Print();

	cout << "------------------------------------------" << endl;

	//���� �Լ�
	// �� ���� ���ε����� ȣ���� �Լ��� ����
	// �� ���� �ܰ迡�� ��ü�� �ڷ����� ���� � �Լ��� ȣ���� ������ ����
	refBase.Print();
	refDerived.Print();

	return 0;
}