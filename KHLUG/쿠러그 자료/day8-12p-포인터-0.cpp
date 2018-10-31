#include <iostream>
using namespace std;

int main() {
	char a, b, c, d, e;
	char* pa = &a;
	char* pb = &b;
	char* pc = &c;
	char* pd = &d;
	char* pe = &e;
	
	cout << "5글자 입력: ";

	cin.unsetf(ios::skipws);

	cin >> *pa >> *pb >> *pc >> *pd >> *pe; // 초기화되지 않은 포인터는 cin에 넣을 수 없다.

	cout << "#" << (void*)&a << ": " << *pa << "(" << (int)*pa << ")" << endl; // char*는 문자열로 읽기 때문에 다른 형식의 포인터로 변환해줘야 한다.
	cout << "#" << (void*)&b << ": " << *pb << "(" << (int)*pb << ")" << endl;
	cout << "#" << (void*)&c << ": " << *pc << "(" << (int)*pc << ")" << endl;
	cout << "#" << (void*)&d << ": " << *pd << "(" << (int)*pd << ")" << endl;
	cout << "#" << (void*)&e << ": " << *pe << "(" << (int)*pe << ")" << endl;

	return 0;
}