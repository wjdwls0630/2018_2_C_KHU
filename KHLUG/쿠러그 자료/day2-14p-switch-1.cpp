#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "몇 점입니까: ";
	cin >> score;

	cout << "당신의 학점은: ";
	switch (score) {
	case 5:
		cout << "A";
		break;
	case 4:
		cout << "B";
		break;
	case 3:
		cout << "C";
		break;
	case 2:
		cout << "D";
		break;
	case 1:
		cout << "F";
		break;
	default:
		cout << "E(재시험)";
		break;
	}

	cout << endl;

	return 0;
}
