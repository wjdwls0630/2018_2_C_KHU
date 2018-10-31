#include <iostream>
using namespace std;

	//c언어에서 부터 사용해왔던 헤더파일( <stdio.h> <stdlib.h> <math.h> <string.h>)은 .h를 빼고 앞에 c를 붙여서 사용할 수 있다.  
	// →  <cstdio> <cstdlib> <cmath> <cstring>



	//연산자 중 연산 결과가 참 또는 거짓인 연산자
	// → 비교 연산자 (== != > < ...)
	// → 논리 연산자 (! && ||)
	//c언어에서는 이 연산자들의 연산 결과가 1 or 0(int 자료형)
	//c++에서는 이 연산자들의 연산 결과가 true or false(bool 자료형)

int main()
{
	cout << "true = " << true << endl;										// >> 1	
	cout << "false = " << false << endl;									// >> 0

	//boolalpha 조정자를 이용해 true를 true로 false 를 false로 출력
	cout << boolalpha;
	cout << "true = " << true << endl;										// >> true
	cout << "false = " << false << endl;									// >> false							//boolalpha연산자를 미리 사용했기 때문에;

	cout << "sizeof(bool) = " << sizeof(bool) << endl;						// >> 1

	cout << "(20 > 10) =" << (20 > 10) << endl;								//true


	return 0;
}