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
		cout << "Sample:: ~Sample() - data "<< data << endl;
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
	Sample array[5];
	// �� ������ ��ü �� ������ ���Ұ� �����ڿ� �Ҹ��ڸ� �θ��� �ȴ�.

	for (int i = 0; i < 5; i++)
		array[i].SetData(i + 1);

	for (int i = 0; i < 5; i++)
		array[i].Print();
		// �� (*(array + 1)).Print();










	return 0;
}