#include <iostream>
using namespace std;

/*
// new/delete ������   = malloc�Լ��� ���� ����. ������ �Ҵ�ް� �迭ó�� ����� �� �ִ�.
int main()
{

	int length = 10;
	int* ptr = new int[10];					//new int[length]  �� �̷��� �ȿ� ������ �־ ��� ����.
	
	for (int i = 0; i < length; i++)
		ptr[i] = i + 1;
		// �� *(ptr + i) = i + 1

	//���
	for (int i = 0; i < length; i++)
		cout << "ptr[" << i << "] = " << ptr[i] << endl;

	//�������� ���� �޸𸮴� �׻� ������ �־�� �Ѵ�.
	delete[] ptr;


	return 0;
}
*/

//������(����)
/*
int main()
{

	//���� ����
	int num = 10;

	//������ ����
	int& ref = num;						// �� �̷��� ���������� &�� ����ϸ� num�̶�� ������ �������� ret�� ����� �� �� �� �Ȱ��� ����� �� �ִ�.
	//int& ref2 = 10;      �� error �����ڿ��� ����� �� ���� ����.
	//�� ������ ó�� ������ �� �ʱ�ȭ �ؾ��ϰ� �Ŀ� ���� ����� ������ ���� ����.

	//���
	cout << "num = " << ref << endl;

	//���ο� �� ����
	ref = 20;
	// �� num = 20;

	//�������� �Ҵ�� ���� ������ �ּ�
	cout << "&num = " << &num << ", &ref = " << &ref << endl;						//���⼭ �����°� ����������(�������� �Ҵ�� ���� ������ �ּ�)

	return 0;
}
*/

//������ ��Ա�

//�����͸� �̿��� ������ ���� ȣ��
void swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

}

//�����ڸ� �̿��� ������ ���� ȣ��
void swap(int& r1, int& r2)
//int& r1 = x;
//int& r2 = y;
{
	int tmp = r1;
	r1 = r2;
	r2 - tmp;

}


int main()
{
	int x = 10, y = 20;

	cout << "x = " << x << "y = " << y << endl;

	swap(&x, &y);		//void swap(int *p1, int *p2)

	cout << "x = " << x << "y = " << y << endl;


	swap(x, y);			//void swap(int& r1, int& r2)

	cout << "x = " << x << "y = " << y << endl;


	return 0;
}