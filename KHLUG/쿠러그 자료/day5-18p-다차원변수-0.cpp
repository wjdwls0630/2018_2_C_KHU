#include <iostream>
using namespace std;

int main() {
	int dan[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			dan[i][j] = (i + 2) * (j + 2);
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << (i + 2) << " * " << (j + 2) << " = " << dan[i][j] << endl;
		}
		cout << endl;
	}

	return 0;
}