#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;

	cout << "�Ǻ���ġ: ";
	int prev = 1;
	int now =  1;

	cout << prev << " ";
	cout << now << " ";
	while (now + prev < n) {
		int temp = now;
		now += prev;
		prev = temp;

		cout << now << " ";
	}

	return 0;
}
