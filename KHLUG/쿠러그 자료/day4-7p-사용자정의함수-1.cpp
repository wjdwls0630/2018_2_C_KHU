#include <iostream>
using namespace std;

double max(double num1, double num2, double num3);
double min(double num1, double num2, double num3);

int main() {
	double num1;
	double num2;
	double num3;

	cout << "ù ��° ����: ";
	cin >> num1;
	cout << "�� ��° ����: ";
	cin >> num2;
	cout << "�� ��° ����: ";
	cin >> num3;

	cout << "�ִ밪: " << max(num1, num2, num3) << endl;
	cout << "�ּҰ�: " << min(num1, num2, num3) << endl;

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
