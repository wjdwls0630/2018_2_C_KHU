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

		//this ������ : ��� �������� ��ü�� ����Ű�� ������
		cout << "data = " << this->data << endl;
	}
	//��ü�� �����͸� ���ϴ� ��� �Լ�
	Sample* GetThisPointer() { return this; }

	//�ڱ� �����ڸ� ��ȯ�ϴ� �Լ�
	Sample& Adder(int n)
	{
		data += n;

		//this - ��ü�� ����Ű�� ������
		//*this - ��ü�� ����Ű�� �����Ϳ� ����� �� - ��ü �� �ڽ� = �ڱ� ������
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

	obj.Adder(3).Print();    // >> obj.Adder(3)�� ������ �� ��ü�̹Ƿ� �ű⿡ ���������ڸ� ��밡���ϴ�.


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
	//������
	Sample(int n = 0) :data(n) {}

	//���� ������
	// �ش� Ŭ������ ��ü�� �޾� ��ü�� �����ϴ� ������
	// �� Ŭ������ ���� �����ڰ� ������ �⺻ ���� �����ڸ� �ڵ����� �߰��Ѵ�.
	// �Ű������� �Ѿ�� ��ü�� ��� ������ ��������� ���� �����Ѵ�.
	// ���� �ڵ����� ����
	// Sample(const Sample& copy) : data(copy.data), x(copy.x) {}

	void Print()
	{
		cout << "data = " << data << endl;
	}

	

};

int main()
{
	//��ü ����
	Sample obj = 10;

	int num = 10;

	Sample obj2 = obj;

	obj2.Print();

	return 0;
}
*/

/*
//���� �޸� �Ҵ��� ���� ��������� Ȯ���ϰ� ���ڿ��� �����ϴ� Ŭ����
class Sample
{
private:
	char* data;

public:
	//������
	Sample() : data(NULL) {}

	Sample(const char* str) : data(NULL)
	{
		//���� �޸� �Ҵ��� ���� ���ڿ��� ���� ���
		int length = strlen(str);

		//���� �޸� �Ҵ�
		data = new char[length+1];				// >> null���ڰ� �� ����

		//���ڿ��� ����
		strcpy(data, str);
	}

	//�⺻ ���� ������
	//Sample(const Sample& copy) : data(copy.data) {}
	
	Sample(const Sample& copy) : data(NULL)					//���� ���縦 ���� ����� ����� ���� �⺻ ���� �������� ����
	{
		int length = strlen(copy.data);

		//���� �޸� �Ҵ�
		data = new char[length + 1];				// >> null���ڰ� �� ����

													//���ڿ��� ����
		strcpy(data, copy.data);
	}


	//�Ҹ��� : ��ü���� �Ҵ� ���� �ý��� �ڿ��� ����
	~Sample()
	{
		//�������� �Ҵ� ���� �޸𸮴� �ݵ�� �����Ѵ�.
		//��ü������ �Ҹ��ڿ��� �Ҵ� ���� �޸𸮸� �����Ѵ�.
		//�޸𸮸� ������ ���� �Ҵ� ���� �޸𸮰� �ִ��� Ȯ�� �� �����ϴ� ���� ����
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
	//��ü ����
	Sample obj;

	Sample obj1("hello world!");

	Sample obj2 = obj1;						// �� �̷��� �Ǹ� obj2�� obj1�� �ּҸ� ������ ���̱� ������ �Ҹ�ɶ� ������ �ȴ�.

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
	//��ȯ ������ : �ٸ� �ڷ����� ���� Sample ��ü�� �� ��ȯ�ϴ� �� ȣ��Ǵ� ������
	Sample(int n = 0) : data(n) {}

	//����ȯ ������ �����ε�
	// 1)
	operator int()
	{
		return data;
	}

	void Print() { cout << "data = " << data << endl; }

};

int main()
{
	//��ü ����
	Sample obj;

	obj = 3;
	// �� 3�� �ڷ����� Sample�� �ٲٷ� �Ѵ�.
	// �� obj = (Sample)3;
	// �� obj = Sample(3);

	int num = obj;				
	// num = (int)obj; �� ������� ������ (int)��� �����ڴ� �����Ƿ� 1) �� ������ �ʿ��ϴ�


	obj.Print();

	cout << "num = " << num << endl;

	return 0;
}

