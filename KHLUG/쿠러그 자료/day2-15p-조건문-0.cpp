#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;

	cout << "첫 번째 숫자: ";
	cin >> num1;
	cout << "두 번째 숫자: ";
	cin >> num2;
	cout << "세 번째 숫자: ";
	cin >> num3;

	int max;
	cout << "가장 큰 수는... " << endl;
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

	// 삼항연산자
	// max = (num1>num2 ? (num1>num3?num1:num3) : (num2>num3?num2:num3));

	cout << max << endl;

	return 0;
}
