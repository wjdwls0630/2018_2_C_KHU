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

	cout << "피연산자 1, 연산자, 피연산자 2 순서대로 입력합니다." << endl;
	cout << "이항연산자: +, -, *, /, %, ^" << endl;
	cout << "단항연산자: c(올림), f(내림), r(제곱근) (두 번째 피연산자는 무시됩니다.)" << endl;
	cout << "프로그램을 종료하려면 ctrl+c를 누르세요" << endl;
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