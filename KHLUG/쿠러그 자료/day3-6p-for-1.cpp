#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;

	int result = 0;

	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			result += i;
		}
	}
	else {
		for (int i = -1; i >= n; i--) {
			result += i;
		}
	}

	cout << "���: " << result << endl;

	return 0;
}
