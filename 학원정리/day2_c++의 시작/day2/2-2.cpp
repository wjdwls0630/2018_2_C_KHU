#include <iostream>
using namespace std;

	//c���� ���� ����ؿԴ� �������( <stdio.h> <stdlib.h> <math.h> <string.h>)�� .h�� ���� �տ� c�� �ٿ��� ����� �� �ִ�.  
	// ��  <cstdio> <cstdlib> <cmath> <cstring>



	//������ �� ���� ����� �� �Ǵ� ������ ������
	// �� �� ������ (== != > < ...)
	// �� �� ������ (! && ||)
	//c������ �� �����ڵ��� ���� ����� 1 or 0(int �ڷ���)
	//c++������ �� �����ڵ��� ���� ����� true or false(bool �ڷ���)

int main()
{
	cout << "true = " << true << endl;										// >> 1	
	cout << "false = " << false << endl;									// >> 0

	//boolalpha �����ڸ� �̿��� true�� true�� false �� false�� ���
	cout << boolalpha;
	cout << "true = " << true << endl;										// >> true
	cout << "false = " << false << endl;									// >> false							//boolalpha�����ڸ� �̸� ����߱� ������;

	cout << "sizeof(bool) = " << sizeof(bool) << endl;						// >> 1

	cout << "(20 > 10) =" << (20 > 10) << endl;								//true


	return 0;
}