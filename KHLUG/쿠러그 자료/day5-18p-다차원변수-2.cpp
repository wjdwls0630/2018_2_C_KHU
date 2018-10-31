#define COUNT_STUDENT 5
#define COUNT_CLASS 5

#include <iostream>
#include <iomanip>
using namespace std;

char getGrade(double);
double getAverageStudent(double[][COUNT_CLASS], int);
double getAverageClass(double[][COUNT_CLASS], int);
double getAverageTotal(double[][COUNT_CLASS]);

int main() {
	double scores[COUNT_STUDENT][COUNT_CLASS] = { 0 };

	cout << setprecision(3);

	for (int i = 0; i < COUNT_STUDENT; i++) {
		cout << "з儅 " << i << "曖 薄熱: ";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cin >> scores[i][j];
		}
	}

	cout << endl;

	cout << "        弛";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "  婁跡" << setw(2) <<  i;
	}
	cout << "弛 ゎ  敕";
	cout << endl;

	cout << "式式式式托";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "式式式式";
	}
	cout << "托式式式式" << endl;

	for (int i = 0; i < COUNT_STUDENT; i++) {
		cout << " з儅" << setw(2) << i << " 弛";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cout << " " << setw(5) << scores[i][j] << " " << getGrade(scores[i][j]);
		}
		cout << "弛" << setw(5) << getAverageStudent(scores, i) << " " << getGrade(getAverageStudent(scores, i)) << endl;
	}

	cout << "式式式式托";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "式式式式";
	}
	cout << "托式式式式" << endl;

	cout << " ゎ  敕 弛";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << " " << setw(5) << getAverageClass(scores, i) << "  ";
	}
	cout << "弛" << setw(5) << getAverageTotal(scores) << endl << endl;

	return 0;
}

char getGrade(double score) {
	switch ((long)score / 10) {
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
	case 5:
		return 'D';
	default:
		return 'F';
	}
}

double getAverageStudent(double data[][COUNT_CLASS], int where) {
	double total = 0;
	for (int i = 0; i < COUNT_CLASS; i++) {
		total += data[where][i];
	}
	return total / COUNT_CLASS;
}

double getAverageClass(double data[][COUNT_CLASS], int where) {
	double total = 0;
	for (int i = 0; i < COUNT_STUDENT; i++) {
		total += data[i][where];
	}
	return total / COUNT_STUDENT;
}

double getAverageTotal(double data[][COUNT_CLASS]) {
	double total = 0;
	for (int i = 0; i < COUNT_STUDENT; i++) {
		for (int j = 0; j < COUNT_CLASS; j++) {
			total += data[i][j];
		}
	}
	return total / (COUNT_STUDENT*COUNT_CLASS);
}