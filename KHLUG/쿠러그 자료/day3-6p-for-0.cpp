#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "������ �Է�: ";
	cin >> n;

	if (n < 0) {
		cout << "������ ����� �� �����ϴ�." << endl;
		return -1; // main()�� ������.
	}

	int result = 1;
	for (int i = 1; i <= n; i++) { // 0�� ��쿡�� ������ �ݺ����� ���� �����Ƿ� result�� 1�� ���´�.
		result *= i; 
	}

	cout << n << "! = " << result << endl;

	return 0;
}
