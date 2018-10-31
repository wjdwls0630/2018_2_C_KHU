#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int** database;

	int row;
	cout << "�ܼ��� �����ͺ��̽��� ����ϴ�." << endl;
	cout << "> �� ���Դϱ�? ";
	cin >> row;
	cout << endl;

	database = new int*[row];
	int* columns = new int[row];

	for (int i = 0; i < row; i++) {
		cout << "> " << i << "���� �� ���� ���Ұ� ����ֽ��ϱ�? ";
		cin >> columns[i];
		database[i] = new int[columns[i]];
	}
	cout << endl;

	cout << "�����͸� �Է��Ͻÿ�." << endl;

	for (int i = 0; i < row; i++) {
		cout << "> " << i << "��: ";
		for (int j = 0; j < columns[i]; j++) {
			cin >> database[i][j];
		}
	}

	ofstream ofs;
	ofs.open("database.txt");

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < columns[i]; j++) {
			ofs << database[i][j] << ' ';
		}
		if(i < row - 1)
			ofs << endl;
	}

	ofs.close();

	return 0;
}