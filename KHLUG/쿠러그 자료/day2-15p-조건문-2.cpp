#include <iostream>
using namespace std;

int main() {
	double num1;
	double num2;
	char oper;

	cout << "�ǿ����� 1, ������(+, -, *, /, %), �ǿ����� 2 ������� �Է��մϴ�." << endl << endl;

	cout << "�ǿ����� 1: ";
	cin >> num1;

	cout << "  ������  : ";
	cin >> oper;

	cout << "�ǿ����� 2: ";
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
