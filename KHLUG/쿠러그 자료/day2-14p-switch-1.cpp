#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "�� ���Դϱ�: ";
	cin >> score;

	cout << "����� ������: ";
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
		cout << "E(�����)";
		break;
	}

	cout << endl;

	return 0;
}
