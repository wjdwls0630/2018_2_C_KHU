#include <iostream>
using namespace std;

int main() {
	int month;

	cout << "몇 월입니까: ";
	cin >> month;

	switch (month) {
	case 3:
	case 4:
	case 5:
		cout << "봄";
		break;
	case 6:
	case 7:
	case 8:
		cout << "여름";
		break;
	case 9:
	case 10:
	case 11:
		cout << "가을";
		break;
	case 12:
	case 1:
	case 2:
		cout << "겨울";
		break;
	default:
		cout << "지구가 아닌 듯";
		break;
	}

	cout << endl;

	return 0;
}
