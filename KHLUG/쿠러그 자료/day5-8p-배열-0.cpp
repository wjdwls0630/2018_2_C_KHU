#include <iostream>
using namespace std;

int main() {
	int numbers[10];

	cout << "정수 10개를 입력: ";
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < 10; i++) {
		cout << numbers[9-i] << " ";
	}
	cout << endl;

	return 0;
}