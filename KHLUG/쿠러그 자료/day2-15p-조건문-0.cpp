#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;

	cout << "ù ��° ����: ";
	cin >> num1;
	cout << "�� ��° ����: ";
	cin >> num2;
	cout << "�� ��° ����: ";
	cin >> num3;

	int max;
	cout << "���� ū ����... " << endl;
	if (num1 > num2) {
		if (num1 > num3) {
			max = num1;
		}
		else {
			max = num3;
		}
	}
	else {
		if (num2 > num3) {
			max = num2;
		}
		else {
			max = num3;
		}
	}

	// ���׿�����
	// max = (num1>num2 ? (num1>num3?num1:num3) : (num2>num3?num2:num3));

	cout << max << endl;

	return 0;
}
