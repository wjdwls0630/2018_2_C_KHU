#include <iostream>
using namespace std;

int main() {
	double num1;
	double num2;
	char oper;

	cout << "피연산자 1, 연산자(+, -, *, /, %), 피연산자 2 순서대로 입력합니다." << endl << endl;

	cout << "피연산자 1: ";
	cin >> num1;

	cout << "  연산자  : ";
	cin >> oper;

	cout << "피연산자 2: ";
	cin >> num2;

	cout << "            =" << endl;

	cout << "            ";
	if (oper == '+') {
		cout << num1 + num2;
	}
	else if (oper == '-') {
		cout << num1 - num2;
	}
	else if (oper == '*') {
		cout << num1 * num2;
	}
	else if (oper == '/') {
		cout << num1 / num2;
	}
	else if (oper == '%') {
		cout << (int)num1 % (int)num2;
	}

	cout << endl << endl;

	return 0;
}
