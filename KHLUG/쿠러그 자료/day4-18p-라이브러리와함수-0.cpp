#include <iostream>
#include <cmath>
using namespace std;

void calculator();
double add(double num1, double num2);
double subtract(double num1, double num2);
long divide(long num1, long num2);
double multiply(double num1, double num2);
long modular(long num1, long num2);

int main() {
	while (true) {
		calculator();
	}
	return 0;
}

void calculator() {
	double num1;
	double num2;
	char oper;

	cout << "�ǿ����� 1, ������, �ǿ����� 2 ������� �Է��մϴ�." << endl;
	cout << "���׿�����: +, -, *, /, %, ^" << endl;
	cout << "���׿�����: c(�ø�), f(����), r(������) (�� ��° �ǿ����ڴ� ���õ˴ϴ�.)" << endl;
	cout << "���α׷��� �����Ϸ��� ctrl+c�� ��������" << endl;
	cin >> num1;
	cin >> oper;
	cin >> num2;

	double result;

	if (oper == '+') {
		result = add(num1, num2);
	}
	else if (oper == '-') {
		result = subtract(num1, num2);
	}
	else if (oper == '*') {
		result = multiply(num1, (long)num2);
	}
	else if (oper == '/') {
		result = divide((long)num1, (long)num2);
	}
	else if (oper == '%') {
		result = modular((long)num1, (long)num2);
	}
	else if (oper == '^') {
		result = pow(num1, num2);
	}
	else if (oper == 'c') {
		result = ceil(num1);
	}
	else if (oper == 'f') {
		result = floor(num1);
	}
	else if (oper == 'r') {
		result = sqrt(num1);
	}

	cout << "= " << result << endl << endl;
}

double add(double num1, double num2) {
	return num1 + num2;
}

double subtract(double num1, double num2) {
	return num1 - num2;
}

long divide(long num1, long num2) {
	return num1 / num2;
}

double multiply(double num1, double num2) {
	return num1 * num2;
}

long modular(long num1, long num2) {
	return num1 % num2;
}