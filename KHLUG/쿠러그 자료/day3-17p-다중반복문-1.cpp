#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n; j >= 0; j--) {
			if (j <= i) {
				cout << "��";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
