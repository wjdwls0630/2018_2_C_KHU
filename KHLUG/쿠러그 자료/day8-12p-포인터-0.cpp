#include <iostream>
using namespace std;

int main() {
	char a, b, c, d, e;
	char* pa = &a;
	char* pb = &b;
	char* pc = &c;
	char* pd = &d;
	char* pe = &e;
	
	cout << "5���� �Է�: ";

	cin.unsetf(ios::skipws);

	cin >> *pa >> *pb >> *pc >> *pd >> *pe; // �ʱ�ȭ���� ���� �����ʹ� cin�� ���� �� ����.

	cout << "#" << (void*)&a << ": " << *pa << "(" << (int)*pa << ")" << endl; // char*�� ���ڿ��� �б� ������ �ٸ� ������ �����ͷ� ��ȯ����� �Ѵ�.
	cout << "#" << (void*)&b << ": " << *pb << "(" << (int)*pb << ")" << endl;
	cout << "#" << (void*)&c << ": " << *pc << "(" << (int)*pc << ")" << endl;
	cout << "#" << (void*)&d << ": " << *pd << "(" << (int)*pd << ")" << endl;
	cout << "#" << (void*)&e << ": " << *pe << "(" << (int)*pe << ")" << endl;

	return 0;
}