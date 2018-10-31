#define COUNT_STUDENT 5
#define COUNT_CLASS 5

#include <iostream>
#include <iomanip>
using namespace std;

struct student {
	char name[255];
	int score[COUNT_CLASS];
};

char getGrade(double);
double getAverageStudent(student);
double getAverageClass(student[], int);
double getAverageTotal(student[]);

int main() {
	student data[COUNT_STUDENT];

	cout << setprecision(3);

	for (int i = 0; i < COUNT_STUDENT; i++) {
		cout << "�л� " << i << "�� �̸�: ";
		cin >> data[i].name;

		cout << setw(6) << data[i].name << "�� ����: ";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cin >> data[i].score[j];
		}
	}
	cout << endl;

	cout << "        ��";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "  ����" << setw(2) <<  i;
	}
	cout << "�� ��  ��";
	cout << endl;

	cout << "����������";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "��������";
	}
	cout << "����������" << endl;

	for (int i = 0; i < COUNT_STUDENT; i++) {
		cout << " " << setw(6) << data[i].name << " ��";
		for (int j = 0; j < COUNT_CLASS; j++) {
			cout << " " << setw(5) << data[i].score[i] << " " << getGrade(data[i].score[i]);
		}
		cout << "��" << setw(5) << getAverageStudent(data[i]) << " " << getGrade(getAverageStudent(data[i])) << endl;
	}

	cout << "����������";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << "��������";
	}
	cout << "����������" << endl;

	cout << " ��  �� ��";
	for (int i = 0; i < COUNT_CLASS; i++) {
		cout << " " << setw(5) << getAverageClass(data, i) << "  ";
	}
	cout << "��" << setw(5) << getAverageTotal(data) << endl << endl;

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

double getAverageStudent(student s) {
	double total = 0;
	for (int i = 0; i < COUNT_CLASS; i++) {
		total += s.score[i];
	}
	return total / COUNT_CLASS;
}

double getAverageClass(student data[], int where) {
	double total = 0;
	for (int i = 0; i < COUNT_STUDENT; i++) {
		total += data[i].score[where];
	}
	return total / COUNT_STUDENT;
}

double getAverageTotal(student data[]) {
	double total = 0;
	for (int i = 0; i < COUNT_STUDENT; i++) {
		for (int j = 0; j < COUNT_CLASS; j++) {
			total += data[i].score[j];
		}
	}
	return total / (COUNT_STUDENT*COUNT_CLASS);
}

/*
������
20 30 40 50 60
ȫ��ǥ
30 40 50 60 70
��ö��
40 50 60 70 80
���¹�
50 60 70 80 90
�ɻ���
60 70 80 90 100

*/