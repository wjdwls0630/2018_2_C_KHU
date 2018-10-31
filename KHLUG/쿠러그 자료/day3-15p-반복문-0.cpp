#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		double score1;
		double score2;
		double score3;
		double score4;
		double score5;

		cout << (i+1) << "번째 학생의 다섯 개의 점수를 입력하시오: ";
		cin >> score1 >> score2 >> score3 >> score4 >> score5;

		double average = (score1 + score2 + score3 + score4 + score5) / 5;

		cout << "학점은: ";
		if (average >= 90) {
			cout << "A";
		}
		else if (average >= 80) {
			cout << "B";
		}
		else if (average >= 70) {
			cout << "C";
		}
		else if (average >= 50) {
			cout << "D";
		}
		else {
			cout << "F";
		}

		cout << endl << endl;
	}

	return 0;
}
