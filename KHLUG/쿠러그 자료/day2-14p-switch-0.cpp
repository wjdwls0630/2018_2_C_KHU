#include <iostream>
using namespace std;

int main() {
	int month;

	cout << "�� ���Դϱ�: ";
	cin >> month;

	switch (month) {
	case 3:
	case 4:
	case 5:
		cout << "��";
		break;
	case 6:
	case 7:
	case 8:
		cout << "����";
		break;
	case 9:
	case 10:
	case 11:
		cout << "����";
		break;
	case 12:
	case 1:
	case 2:
		cout << "�ܿ�";
		break;
	default:
		cout << "������ �ƴ� ��";
		break;
	}

	cout << endl;

	return 0;
}
