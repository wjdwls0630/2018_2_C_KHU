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
/*
int main()
{
	Sample *ptr = new Sample[5];

	for (int i = 0; i, 5; i++)
		ptr[i].SetData(i + 11);

	for (int i = 0; i, 5; i++)
		ptr[i].Print();
		// �� (*(ptr + i)).Print();			// �̰� �� �� ��ü�̱� ������ ��� ���� �����ڷ� ������ ����
		// �� *(ptr + i) -> Print();			// �̰� ������ �̱� ������ ���� ��� ���� �����ڷ� �����ؾߵ�



	//delete�� ���� ù��° ���Ҹ� ���� �ȴ�.
	delete[] ptr;


	return 0;
}*/

int main()
{
	//Ŭ���� �������� �迭 ����
	Sample* array[5];

	//�������� �迭�� �� ���ҿ� ���� �޸� �Ҵ��� ���� ��ü ����
	for (int i = 0; i < 5; i++)
		array[i] = new Sample(i + 1);

	for (int i = 0; i < 5; i++)
		array[i]->Print();
		// �� (*(array + i)) -> Print();


	for (int i = 0; i < 5; i++)
		delete array[i];



	return 0;
}