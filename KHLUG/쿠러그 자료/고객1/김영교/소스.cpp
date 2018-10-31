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

	cout << "2���� �迭�� ����ϴ�." << endl;
	cout << "> �� ���Դϱ�? ";

	cin >> row;
	table = new int*[row];
	rownum = new int[row];

	for (int i = 0; i < row; i++)
	{
		cout << "> " << i << "���� �� ���� ���Ұ� ����ֽ��ϱ�? : ";
		cin >> rownum[i];
		table[i] = new int[rownum[i]];
	}

	cout << "�����͸� �Է��Ͻÿ�." << endl;

	for (int i = 0; i < row; i++)
	{
		cout << ">" << i << "�� : ";
		for (int j = 0; j < rownum[i]; j++)
		{
			cin >> table[i][j];
		}
	}

	cout << "����Ǿ����ϴ�." << endl << endl;
	cout << "����� ��� : " << endl;

	for (int i = 0; i < row; i++)
	{
		cout << ">" << i << "�� : ";
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
	cout << "�����͸� �ҷ��ɴϴ�.." << endl;
	ifstream filestream;
	filestream.open("saveddata.txt");

	if (!filestream)
	{
		cerr << "Error 100 : ������ ���� ���߽��ϴ�.";
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
		cout << "������ �Է��� ���ϸ� 1, ����� ���ϸ� 2��, ���α׷� ���Ḧ ���ϸ� 3�� �Է��ϼ��� : ";
		cin >> choice;

		switch (choice)
		{
		case 1: input(); break;
		case 2: output(); break;
		case 3: return;
		default: cout << "����� �Է��ϼ���." << endl;
		}

	}

}
