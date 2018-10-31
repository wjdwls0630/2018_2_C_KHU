#include <iostream>
#define size 5
using namespace std;

void case1(int array[][size]);
void case2(int array[][size]);
void case3(int array[][size]);
void case4(int array[][size]);
void printArray(int array[][size]);

int main() {
	int result1[size][size] = { 0 };
	int result2[size][size] = { 0 };
	int result3[size][size] = { 0 };
	int result4[size][size] = { 0 };

	case1(result1);
	case2(result2);
	case3(result3);
	case4(result4);

	printArray(result1);
	printArray(result2);
	printArray(result3);
	printArray(result4);
	
	return 0;
}

void case1(int array[][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i >= j) array[i][j] = 1;
		}
	}
}

void case2(int array[][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) array[i][j] = 1;
		}
	}
}

void case3(int array[][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j || size-i-1 == j) array[i][j] = 1;
		}
	}
}

void case4(int array[][size]) {
	char direction = 't';
	int i = size / 2;
	int j = size / 2;

	for (int n = 1; n <= size ; n++) {
		for (int m = 0; m < n; m++) {
			array[i][j] = 1;
			if (direction == 't') i--;
			else if (direction == 'b') i++;
			else if (direction == 'l') j--;
			else if (direction == 'r') j++;
			if (i < 0 || j < 0 || i >= size || j >= size) break;
		}
		if (i < 0 || j < 0 || i >= size || j >= size) break;
		if (direction == 't') direction = 'r';
		else if (direction == 'b') direction = 'l';
		else if (direction == 'l') direction = 't';
		else if (direction == 'r') direction = 'b';
	}
}

void printArray(int array[][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] == 0) {
				cout << "бр";
			}
			else {
				cout << "бс";
			}
		}
		cout << endl;
	}
	cout << endl;
}