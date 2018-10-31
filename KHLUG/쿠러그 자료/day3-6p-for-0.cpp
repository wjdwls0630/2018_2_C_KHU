#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "정수를 입력: ";
	cin >> n;

	if (n < 0) {
		cout << "음수는 계산할 수 없습니다." << endl;
		return -1; // main()이 끝난다.
	}

	int result = 1;
	for (int i = 1; i <= n; i++) { // 0인 경우에는 어차피 반복문이 돌지 않으므로 result는 1로 남는다.
		result *= i; 
	}

	cout << n << "! = " << result << endl;

	return 0;
}
