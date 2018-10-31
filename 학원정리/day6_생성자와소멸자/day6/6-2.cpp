#include <iostream>


using namespace std;

class Sample
{
private:
	//�������
	int data;

public:
	//��� �Լ�
	//�����ڿ� �Ҹ���
	Sample(int n = 0) : data(n)
	{
		cout << "Sample::Sample(int n) - data " << data << endl;
	}

	~Sample()
	{
		cout << "Sample:: ~Sample() - data " << data << endl;
	}

	//�����ڿ� ������, ����Լ�
	void SetData(int n) { data = n; }
	int GetData() { return data; }

	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	//���� �޸� �Ҵ��� �̿��� �迭
	//new �����ڷ� ���� �޸� �Ҵ��� ���� ��ü ����
	Sample *ptr = new Sample(2);												// �� new �����ڸ� �̿����� �� ������ ȣ��

	ptr->Print();

	ptr->SetData(10);
	// == (*ptr).SetData(10);

	ptr->Print();					




	//�������� �Ҵ��� �޸𸮿� ���� �Ҹ��� �����ؾ��Ѵ�.
	delete ptr;																// �� �Ҹ��� ȣ��


	return 0;
}