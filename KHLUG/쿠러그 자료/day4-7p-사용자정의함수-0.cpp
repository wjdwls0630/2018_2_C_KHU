#include <iostream>
using namespace std;

void printDan(int n);

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;
	
	printDan(n);

	return 0;
}

void printDan(int n) {
	for (int i = 2; i < 10; i++) {
		cout << n << " * " << i << " = " << n*i << endl;
	}
}
