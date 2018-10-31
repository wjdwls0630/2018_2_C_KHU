//TRY 4
#include <iostream>
#include <fstream>
using namespace std;


//Data input
void input()
{
	int row;
	int **table;
	int *rownum;

	cout << "2차원 배열을 만듭니다." << endl;
	cout << "> 몇 행입니까? ";

	cin >> row;
	table = new int*[row];
	rownum = new int[row];

	for (int i = 0; i < row; i++)
	{
		cout << "> " << i << "행은 몇 개의 원소가 들어있습니까? : ";
		cin >> rownum[i];
		table[i] = new int[rownum[i]];
	}

	cout << "데이터를 입력하시오." << endl;

	for (int i = 0; i < row; i++)
	{
		cout << ">" << i << "행 : ";
		for (int j = 0; j < rownum[i]; j++)
		{
			cin >> table[i][j];
		}
	}

	cout << "저장되었습니다." << endl << endl;
	cout << "저장된 결과 : " << endl;

	for (int i = 0; i < row; i++)
	{
		cout << ">" << i << "행 : ";
		for (int j = 0; j < rownum[i]; j++)
		{
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

	ofstream filestr;
	filestr.open("saveddata.txt");

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < rownum[i]; j++)
		{
			filestr << table[i][j] << " ";
		}
		filestr << '\n';
	}

	filestr.close();
}



//file opner
void output()
{
	cout << "데이터를 불러옵니다.." << endl;
	ifstream filestream;
	filestream.open("saveddata.txt");

	if (!filestream)
	{
		cerr << "Error 100 : 파일을 열지 못했습니다.";
		exit(100);
	}

	char cur;

	while (filestream.get(cur))
	{
		cout << cur;
	}

}

void main()
{
	int choice;

	while (1)
	{
		cout << "데이터 입력을 원하면 1, 출력을 원하면 2를, 프로그램 종료를 원하면 3을 입력하세요 : ";
		cin >> choice;

		switch (choice)
		{
		case 1: input(); break;
		case 2: output(); break;
		case 3: return;
		default: cout << "제대로 입력하세요." << endl;
		}

	}

}
