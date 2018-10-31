#include <iostream>
using namespace std;

/*
// new/delete 연산자   = malloc함수와 같은 역할. 공간을 할당받고 배열처럼 사용할 수 있다.
int main()
{

	int length = 10;
	int* ptr = new int[10];					//new int[length]  → 이렇게 안에 변수를 넣어도 상관 없다.
	
	for (int i = 0; i < length; i++)
		ptr[i] = i + 1;
		// → *(ptr + i) = i + 1

	//출력
	for (int i = 0; i < length; i++)
		cout << "ptr[" << i << "] = " << ptr[i] << endl;

	//동적으로 받은 메모리는 항상 해제해 주어야 한다.
	delete[] ptr;


	return 0;
}
*/

//참조자(별명)
/*
int main()
{

	//변수 선언
	int num = 10;

	//참조자 선언
	int& ref = num;						// → 이렇게 참조연산자 &를 사용하면 num이라는 변수의 별명으로 ret를 만들어 준 것 즉 똑같이 사용할 수 있다.
	//int& ref2 = 10;      → error 참조자에는 상수가 들어갈 수는 없다.
	//이 별명은 처음 선언할 때 초기화 해야하고 후에 참조 대상을 변경할 수는 없다.

	//출력
	cout << "num = " << ref << endl;

	//새로운 값 대입
	ref = 20;
	// → num = 20;

	//변수에게 할당된 저장 공간의 주소
	cout << "&num = " << &num << ", &ref = " << &ref << endl;						//여기서 나오는건 참조연산자(변수에게 할당된 저장 공간의 주소)

	return 0;
}
*/

//참조자 써먹기

//포인터를 이용한 참조에 의한 호출
void swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

}

//참조자를 이용한 참조에 의한 호출
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