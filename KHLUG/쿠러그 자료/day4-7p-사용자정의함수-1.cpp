#include <iostream>
using namespace std;

double max(double num1, double num2, double num3);
double min(double num1, double num2, double num3);

int main() {
	double num1;
	double num2;
	double num3;

	cout << "첫 번째 숫자: ";
	cin >> num1;
	cout << "두 번째 숫자: ";
	cin >> num2;
	cout << "세 번째 숫자: ";
	cin >> num3;

	cout << "최대값: " << max(num1, num2, num3) << endl;
	cout << "최소값: " << min(num1, num2, num3) << endl;

	return 0;
}

double max(double num1, double num2, double num3) {
	if (num1 > num2) {
		if (num1 > num3) {
			return num1;
		}
		else {
			return num3;
		}
	}
	else {
		if (num2 > num3) {
			return num2;
		}
		else {
			return num3;
		}
	}
}

double min(double num1, double num2, double num3) {
	if (num1 < num2) {
		if (num1 < num3) {
			return num1;
		}
		else {
			return num3;
		}
	}
	else {
		if (num2 < num3) {
			return num2;
		}
		else {
			return num3;
		}
	}
}
