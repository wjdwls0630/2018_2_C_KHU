#include <iostream>

//using namespace std;                          //namespace = 이름공간


//함수 오버로딩 : 이름이 같은 함수도 매개변수의 개수나 자료형이 다르다면 여러개를 선언할 수 있다.

/*
void change(char *x, char *y)
{
	//포인터 안에 들어 있는 문자에 더해야 한다.
	x[0] += 32;
	y[0] += 32;
	//*x += 32;															//포인터 연산자 : 포인터가 가리키는 주소에 저장된 값을 참조하는 연산자

}

void change(int *x, int *y)
{
	*x += 100;
	*y += 200;

}

int main()
{
	char c1 = 'A', c2 = 'B';
	change(&c1, &c2);													//변수 등에 할당된 저장공간의 주소를 구하는 연산자
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