#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;

	for (int i = 2; i < 10; i++) {
		cout << n << " * " << i << " = " << n*i << endl;
	}

	return 0;
}
