#include <iostream>
using namespace std;

double calculateAverage(double num1, double num2, double num3);
void printNumber(double num);

int main() {
	double num1;
	double num2;
	double num3;

	while (true) {
		cout << "����� ���մϴ�. (�����Ϸ��� ctrl+c�� ��������.)" << endl;
		cout << "ù ��° ����: ";
		cin >> num1;
		cout << "�� ��° ����: ";
		cin >> num2;
		cout << "�� ��° ����: ";
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
