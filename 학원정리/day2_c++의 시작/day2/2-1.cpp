#include <iostream>

//using namespace std;                          //namespace = �̸�����


//�Լ� �����ε� : �̸��� ���� �Լ��� �Ű������� ������ �ڷ����� �ٸ��ٸ� �������� ������ �� �ִ�.

/*
void change(char *x, char *y)
{
	//������ �ȿ� ��� �ִ� ���ڿ� ���ؾ� �Ѵ�.
	x[0] += 32;
	y[0] += 32;
	//*x += 32;															//������ ������ : �����Ͱ� ����Ű�� �ּҿ� ����� ���� �����ϴ� ������

}

void change(int *x, int *y)
{
	*x += 100;
	*y += 200;

}

int main()
{
	char c1 = 'A', c2 = 'B';
	change(&c1, &c2);													//���� � �Ҵ�� ��������� �ּҸ� ���ϴ� ������
	std::cout << c1 << " " << c2 << std::endl;

	int n1 = 10, n2 = 20;
	change(&n1, &n2);
	std::cout << n1 << " " << n2 << std::endl;

	return 0;
}*/

void swap(char *c1, char* c2)
{
	char tmp;
	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;

}

void swap(int *c1, int* c2)
{
	int tmp;
	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;

}

int main()
{
	char c1 = 'A', c2 = 'B';
	swap(&c1, &c2);												
	std::cout << c1 << " " << c2 << std::endl;

	int n1 = 10, n2 = 20;
	swap(&n1, &n2);
	std::cout << n1 << " " << n2 << std::endl;

	return 0;
}