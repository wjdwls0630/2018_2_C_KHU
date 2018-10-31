#include <iostream>
using namespace std;

	//																				const;;

/*
int main()
{
	int x = 10;
	int y = 20;

	//�������� ���ȭ
	//�ڷ��� �տ� constŰ���带 ���̴� ��� �����Ͱ� ����Ű�� �ּҿ� ����� ���� ���
	const int* ptr1 = &x;
	// *ptr1 = 20 �� error
	x = 20;				//�� ����

	ptr1 = &y;			//�� ����


	//�ڷ��� �ڿ� const Ű���带 ���̴� ��� �����Ϳ� ����� �ּҰ� ���
	int* const ptr2 = &x;
	*ptr2 = 20;
	//ptr2 = &y; �� ����

	//�ڷ����� �հ� �ڿ� constŰ���带 ���̴� ��� �Ѵ� ���
	const int* const ptr3 = &x;

	//������ : ���� ���� ��������� ���̴� ����
	int& ref1 = x;

	ref1 = 30;
	
	//�����ڰ� �����ϴ� ���� ������ ����� ���� ���
	const int& ref2 = y;

	return 0;
}
*/

class Sample
{
private:
	int data;
	const int MAX;		//const ��� ���� : �������� �⺸ �ʱ�ȭ ����Ʈ������ �ʱ�ȭ ����

public:
	Sample() : data(), MAX(256) {}

	Sample(int n = 0): data(n), MAX(256) 
	{
		SetData(n);
	}

	void SetData(int n) 
	{
		data = (n > MAX) ? MAX : n;
	}

	//const ��� �Լ�
	//const ��� �Լ������� ��� ������ ���� ���� �� �� ����.
	// ���� const ��� �Լ��� �ƴ� �ٸ� ��� �Լ��� ȣ���� �� ����.
	// �Լ� ������ ��� ������ ���� �������� �ʴ� ����Լ��� const�� �����ϴ� ���� ����.
	void Print() const
	{
		cout << "data = " << data << endl;
	}

	//const ���� ���ε� �Լ� �����ε��� ������ �ȴ�.
	void DoIt()
	{
		data += 10;
		Print();
	}

	void DoIt() const
	{
		Print();
	}

};

int main()
{
	// const ��ü : ��������� ���� ������ �� ���� ��ü
	// �� ����Լ��� ȣ���� �� ����. �� const ��� �Լ��� ȣ���� �� �ִ�.
	const Sample obj1(300);

	obj1.Print();

	return 0;
}