#include <iostream>
using namespace std;

bool isSameArray(int numbers1[], int numbers2[]);

int main() {
	int numbers1[5];
	int numbers2[5];

	cout << "ù ��° 5 ���� �Է�: ";
	for (int i = 0; i < 5; i++) {
		cin >> numbers1[i];
	}

	cout << "�� ��° 5 ���� �Է�: ";
	for (int i = 0; i < 5; i++) {
		cin >> numbers2[i];
	}

	if (isSameArray(numbers1, numbers2))
		cout << "���� �迭�Դϴ�.";
	else
		cout << "�ٸ� �迭�Դϴ�.";

	cout << endl;

	return 0;
}

bool isSameArray(int numbers1[], int numbers2[]) {
	for (int i = 0; i < 5; i++) {
		if (numbers1[i] != numbers2[i]) {
			return false;
		}
	}
	return true;
}