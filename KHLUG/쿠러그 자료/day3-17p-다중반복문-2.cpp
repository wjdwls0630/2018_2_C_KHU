#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;

	cout << "2 이상의 정수를 입력: ";
	cin >> n;
	
	cout << endl;
	cout << "    │   2   3   4   5   6   7   8   9" << endl;
	cout << "──┼────────────────" << endl;
	for (int i = 2; i <= n; i++) {
		cout << setw(4) << i << "│";
		for (int j = 2; j <= 9; j++) {
			cout << setw(4) << (i*j);
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
