#define COUNT_STUDENT 1000
#define COUNT_CLASS 5

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

char getGrade(double);
double getAverageStudent(double[][COUNT_CLASS], int);
double getAverageClass(double[][COUNT_CLASS], int);
double getAverageTotal(double[][COUNT_CLASS]);

int count_student;

int main() {
	double scores[COUNT_STUDENT][COUNT_CLASS] = { 0 };
	
	cout << setprecision(3);

	ifstream ifs;
	ifs.open("data.txt");
	

	// 입력부

	if (!ifs) {
		cout << "점수 데이터가 없습니다." << endl;
		cout << "> 몇 명의 학생입니까? ";
		cin >> count_student;
		cout << endl;

		ofstream ofs;
		ofs.open("data.txt");

		double temp;
		cout << "학생마다 5개의 점수를 입력해주세요." << endl;
		for (int i = 0; i < count_student; i++) {
			cout << "> 학생 " << i << "의 점수: ";
			for (int j = 0; j < 5; j++) {
				cin >> temp;
				ofs << temp << " ";
			}
			ofs << endl;
		}

		ofs.close();
		cout << "데이터 파일이 만들어졌습니다." << endl;

		ifs.open("data.txt");

		cout << endl;
	}

	count_student = 0;
	while (!ifs.eof()) {
		for (int i = 0; i < 5; i++) {
			ifs >> scores[count_student][i];
		}
		count_student++;
	}
	count_student--;


	// 출력부

	cout << "        │";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "  과목" << setw(2) << i;
	}
	cout << "│ 평  균";
	cout << endl;

	cout << "────┼";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "────";
	}
	cout << "┼────" << endl;

	for (int i = 0; i < count_student; i++) {
		cout << " 학생" << setw(2) << i << " │";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cout << " " << setw(5) << scores[i][j] << " " << getGrade(scores[i][j]);
		}
		cout << "│" << setw(5) << getAverageStudent(scores, i) << " " << getGrade(getAverageStudent(scores, i)) << endl;
	}

	cout << "────┼";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "────";
	}
	cout << "┼────" << endl;

	cout << " 평  균 │";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << " " << setw(5) << getAverageClass(scores, i) << "  ";
	}
	cout << "│" << setw(5) << getAverageTotal(scores) << endl << endl;

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
	for (int i = 0; i < count_student; i++) {
		total += data[i][where];
	}
	return total / count_student;
}

double getAverageTotal(double data[][COUNT_CLASS]) {
	double total = 0;
	for (int i = 0; i < count_student; i++) {
		for (int j = 0; j < COUNT_CLASS; j++) {
			total += data[i][j];
		}
	}
	return total / (count_student*COUNT_CLASS);
}