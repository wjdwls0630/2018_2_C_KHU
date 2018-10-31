#include <iostream>
using namespace std;

double calculateAverage(double num1, double num2, double num3);
void printNumber(double num);

int main() {
	double num1;
	double num2;
	double num3;

	while (true) {
		cout << "평균을 구합니다. (종료하려면 ctrl+c를 누르세요.)" << endl;
		cout << "첫 번째 숫자: ";
		cin >> num1;
		cout << "두 번째 숫자: ";
		cin >> num2;
		cout << "세 번째 숫자: ";
		cin >> num3;

		printNumber(calculateAverage(num1, num2, num3));
		cout << endl;
	}

	return 0;
}

double calculateAverage(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}

void printNumber(double num) {
	cout << num << endl;
	return;
}
