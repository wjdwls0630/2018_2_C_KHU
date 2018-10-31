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
	

	// �Էº�

	if (!ifs) {
		cout << "���� �����Ͱ� �����ϴ�." << endl;
		cout << "> �� ���� �л��Դϱ�? ";
		cin >> count_student;
		cout << endl;

		ofstream ofs;
		ofs.open("data.txt");

		double temp;
		cout << "�л����� 5���� ������ �Է����ּ���." << endl;
		for (int i = 0; i < count_student; i++) {
			cout << "> �л� " << i << "�� ����: ";
			for (int j = 0; j < 5; j++) {
				cin >> temp;
				ofs << temp << " ";
			}
			ofs << endl;
		}

		ofs.close();
		cout << "������ ������ ����������ϴ�." << endl;

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


	// ��º�

	cout << "        ��";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "  ����" << setw(2) << i;
	}
	cout << "�� ��  ��";
	cout << endl;

	cout << "����������";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "��������";
	}
	cout << "����������" << endl;

	for (int i = 0; i < count_student; i++) {
		cout << " �л�" << setw(2) << i << " ��";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cout << " " << setw(5) << scores[i][j] << " " << getGrade(scores[i][j]);
		}
		cout << "��" << setw(5) << getAverageStudent(scores, i) << " " << getGrade(getAverageStudent(scores, i)) << endl;
	}

	cout << "����������";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "��������";
	}
	cout << "����������" << endl;

	cout << " ��  �� ��";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << " " << setw(5) << getAverageClass(scores, i) << "  ";
	}
	cout << "��" << setw(5) << getAverageTotal(scores) << endl << endl;

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