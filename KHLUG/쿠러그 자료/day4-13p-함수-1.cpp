#include <iostream>
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

	cout << "�ǿ����� 1, ������(+, -, *, /, %), �ǿ����� 2 ������� �Է��մϴ�." << endl << endl;
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
		result = multiply(num1, num2);
	}
	else if (oper == '/') {
		result = divide((long)num1, (long)num2);
	}
	else if (oper == '%') {
		result = modular((long)num1, (long)num2);
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