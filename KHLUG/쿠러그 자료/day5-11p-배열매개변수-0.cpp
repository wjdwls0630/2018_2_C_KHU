#include <iostream>
using namespace std;

const int arraySize = 10;

void twice(int array[]);
void printReverse(int array[]);

int main() {
	int numbers[arraySize];

	cout << "정수 10개 입력: ";
	for (int i = 0; i < arraySize; i++) {
		cin >> numbers[i];
	}

	twice(numbers);
	printReverse(numbers);
	cout << endl;

	return 0;
}


void twice(int array[]) {
	for (int i = 0; i < arraySize; i++) {
		array[i] *= 2;
	}
}

void printReverse(int array[]) {
	for (int i = arraySize-1; i >= 0; i--) {
		cout << array[i] << " ";
	}
}