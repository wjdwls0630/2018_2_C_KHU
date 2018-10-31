#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "정수를 입력: ";
	cin >> n;

	cout << "피보나치: ";
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
