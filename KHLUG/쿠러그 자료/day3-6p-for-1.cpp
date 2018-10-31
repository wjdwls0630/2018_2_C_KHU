#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "정수를 입력: ";
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

	cout << "결과: " << result << endl;

	return 0;
}
