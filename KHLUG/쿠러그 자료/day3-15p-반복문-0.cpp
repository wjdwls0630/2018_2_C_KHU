#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		double score1;
		double score2;
		double score3;
		double score4;
		double score5;

		cout << (i+1) << "��° �л��� �ټ� ���� ������ �Է��Ͻÿ�: ";
		cin >> score1 >> score2 >> score3 >> score4 >> score5;

		double average = (score1 + score2 + score3 + score4 + score5) / 5;

		cout << "������: ";
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
