#include <iostream>
using namespace std;

void minmax(int* num1, int* num2, int* num3, int*& min, int*& max) {
	if (*num1 > *num2) {
		if (*num1 > *num3) {
			max = num1;
			if (*num2 > *num3) {
				min = num3;
			}
			else {
				min = num2;
			}
		}
		else {
			max = num3;
			min = num2;
		}
	}
	else {
		if (*num2 > *num3) {
			max = num2;
			if (*num1 > *num3) {
				min = num3;
			}
			else {
				min = num1;
			}
		}
		else {
			max = num3;
			min = num1;
		}
	}
}

int main() {
	int a, b, c;
	int* min = NULL;
	int* max = NULL;

	cout << "정수 3개를 입력하세요: ";
	cin >> a >> b >> c;

	minmax(&a, &b, &c, min, max);
	cout << "가장 작은 수: " << *min << endl;
	cout << "가장 큰 수  : " << *max << endl;

	return 0;
}