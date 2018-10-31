#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int** database;

	int row;
	cout << "단순한 데이터베이스를 만듭니다." << endl;
	cout << "> 몇 행입니까? ";
	cin >> row;
	cout << endl;

	database = new int*[row];
	int* columns = new int[row];

	for (int i = 0; i < row; i++) {
		cout << "> " << i << "행은 몇 개의 원소가 들어있습니까? ";
		cin >> columns[i];
		database[i] = new int[columns[i]];
	}
	cout << endl;

	cout << "데이터를 입력하시오." << endl;

	for (int i = 0; i < row; i++) {
		cout << "> " << i << "행: ";
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