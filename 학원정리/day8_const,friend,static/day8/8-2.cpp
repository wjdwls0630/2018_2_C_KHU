#include <iostream>

using namespace std;

//																								friend;;
/*
class Sample
{
private : 
	int data;

	//friend ����
	// �� friend Ŭ������ ����� Ŭ������ ��� �Լ����� �� Ŭ������ private ����� ������ �� �ְ� �ȴ�.
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
		cout << "Sample::data = " << ref.data << endl;											//���� ref.GetData �� ��� ������ friend ���� �Ǿ��� ������ ref.data �̷��� �ᵵ �ȴ�.
	}


};

void PrintData(const Sample& ref)
{
	cout << "Sample::data = " << ref.GetData() << endl;											//���� ref.GetData()�� ��� ������ friend ���� �Ǿ��� ������ ref.data�� �ᵵ �ȴ�.		
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
	//���� ��� ����
	//Ŭ������ ������ ��� ��ü���� �����Ѵ�.

	// �� �������� ����� ��� ������ ��ü�ʹ� ������ ������ ��ü�� �������� ������� ���α׷��� ����Ǹ� ���� ��� ���� ����
	// �� �����ڿ��� �ʱ�ȭ���� ���ϰ� Ŭ���� �ܺο��� �ʱ�ȭ �Ѵ�. ��� 1)
	static int count;


public:
	Sample(int n = 0) : data(n) { count++; }
	~Sample() { count--;  }								//count�� ��ü�� ������ �� ���� �ϳ��� ���� �Ҹ�ɶ����� �ϳ��� �����Ѵ�.
	void Print() const { cout << "data = " << data << endl; }
	void PrintCount() const { cout << "count = " << count << endl; }

	//���� ��� �Լ�
	// �� ��ü�� �����Ǳ� ���� ȣ�� �� �� �ִ� ��� �Լ�
	// �� ���� ��� �Լ������� ���� ������� ������ �� �ִ�.
	// �� ���� ��� �Լ������� this �����͸� ����� �� ����.
	static void StaticPrintCount2()
	{
		cout << "Sample::count = " << count << endl;
	}
};

//1) ���� ��� ������ �ʱ�ȭ
int Sample::count = 0;

int main()
{
	Sample::StaticPrintCount2();											// �� ��ü�� ����Ǳ� ���� ���� ��� �Լ��� ȣ�� �� �� �ִ�.
	
	Sample obj1, obj2, obj3;

	obj1.PrintCount();														//obj2, obj3 �� �ص� ������� ����.

	Sample obj4;

	obj2.StaticPrintCount2();												// �� ��ü�� ���� �� �Ŀ��� ���������� ȣ�� �� ���� �ְ� �̷��� �ϳ��� ��� �Լ��ν� ȣ�� �� ���� �ִ�.

	return 0;
}