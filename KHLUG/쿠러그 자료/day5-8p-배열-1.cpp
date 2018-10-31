#include <iostream>
using namespace std;

int main() {
	int numbers1[5];
	int numbers2[5];

	cout << "첫 번째 5 개를 입력: ";
	for (int i = 0; i < 5; i++) {
		cin >> numbers1[i];
	}

	cout << "두 번째 5 개를 입력: ";
	for (int i = 0; i < 5; i++) {
		cin >> numbers2[i];
	}

	bool isSame = true;
	for (int i = 0; i < 5; i++) {
		if (numbers1[i] != numbers2[i]) {
			isSame = false;
			break;
		}
	}

	if (isSame)
		cout << "같은 배열입니다.";
	else
		cout << "다른 배열입니다.";

	cout << endl;

	return 0;
}