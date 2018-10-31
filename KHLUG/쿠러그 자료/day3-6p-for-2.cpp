#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "정수를 입력: ";
	cin >> n;

	for (int i = 2; i < 10; i++) {
		cout << n << " * " << i << " = " << n*i << endl;
	}

	return 0;
}
