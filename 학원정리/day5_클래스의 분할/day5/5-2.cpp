#include <iostream>
using namespace std;

class Sample
{
private:
	int data;

public: 
	//�⺻ ������(default constructor)
	// Ŭ���� ���� �����ڰ� �ϳ��� ���� ��� �����Ϸ��� �ڵ����� �߰����ִ� ������
	// �� Sample() { }

	//��ü�� ������ �� ���� �������� �ʰ� ������ �� �ֵ��� �⺻�������� ������ ������ �����ڸ� �ݵ�� �ۼ��ؾ� �Ѵ�.
	// sample() : data(0) {}
	// sample(int n = 0) : data(n) {}

	//�Ҹ��ڵ� ��������
	// �� ~Sample() { }						// �� �Ű������� ���� ������ ��κ��� ��� �⺻ �Ҹ��ڷε� ����ϴ�.

	//�����ڿ� ������
	void SetData(int n) { data = n; }
	int GetData() { return data; }

	//���
	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	//��ü ����
	Sample obj;

	return 0;
}