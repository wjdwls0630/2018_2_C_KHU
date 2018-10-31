#include <iostream>
#include <iomanip>
using namespace std;

char getGrade(double);

int main() {
	double scores1[5] = { 0 };
	double scores2[5] = { 0 };
	double scores3[5] = { 0 };
	double scores4[5] = { 0 };
	double scores5[5] = { 0 };

	double sum_student[5] = { 0 };
	double sum_class[5] = { 0 };

	double total = 0;

	cout << "�л� 1�� ����: ";
	for (int i = 0; i < 5; i++) {
		cin >> scores1[i];
	}
	cout << "�л� 2�� ����: ";
	for (int i = 0; i < 5; i++) {
		cin >> scores2[i];
	}
	cout << "�л� 3�� ����: ";
	for (int i = 0; i < 5; i++) {
		cin >> scores3[i];
	}
	cout << "�л� 4�� ����: ";
	for (int i = 0; i < 5; i++) {
		cin >> scores4[i];
	}
	cout << "�л� 5�� ����: ";
	for (int i = 0; i < 5; i++) {
		cin >> scores5[i];
	}

	cout << endl;

	cout << "        �� ���� 1 ���� 2 ���� 3 ���� 4 ���� 5 �� ��  ��" << endl;
	cout << "��������������������������������������������������������" << endl;

	cout << " �л� 1 ��";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << scores1[i] << " " << getGrade(scores1[i]);
		sum_student[0] += scores1[i];
		sum_class[i] += scores1[i];
		total += scores1[i];
	}
	cout << " ��" << setw(5) << (sum_student[0] / 5) << " " << getGrade(sum_student[0] / 5) << endl;

	cout << " �л� 2 ��";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << scores2[i] << " " << getGrade(scores2[i]);
		sum_student[1] += scores2[i];
		sum_class[i] += scores2[i];
		total += scores2[i];
	}
	cout << " ��" << setw(5) << (sum_student[1] / 5) << " " << getGrade(sum_student[1] / 5) << endl;

	cout << " �л� 3 ��";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << scores3[i] << " " << getGrade(scores3[i]);
		sum_student[2] += scores3[i];
		sum_class[i] += scores3[i];
		total += scores3[i];
	}
	cout << " ��" << setw(5) << (sum_student[2] / 5) << " " << getGrade(sum_student[2] / 5) << endl;

	cout << " �л� 4 ��";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << scores4[i] << " " << getGrade(scores4[i]);
		sum_student[3] += scores4[i];
		sum_class[i] += scores4[i];
		total += scores4[i];
	}
	cout << " ��" << setw(5) << (sum_student[3] / 5) << " " << getGrade(sum_student[3] / 5) << endl;

	cout << " �л� 5 ��";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << scores5[i] << " " << getGrade(scores5[i]);
		sum_student[4] += scores5[i];
		sum_class[i] += scores5[i];
		total += scores5[i];
	}
	cout << " ��" << setw(5) << (sum_student[4] / 5) << " " << getGrade(sum_student[4] / 5) << endl;

	cout << "��������������������������������������������������������" << endl;
	cout << " ��  �� ��";
	for (int i = 0; i < 5; i++) {
		cout << "" << setw(5) << (sum_class[i] / 5) << "  ";
	}
	cout << " ��" << setw(5) << (total / 25) << endl << endl;

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