#include "RPSGame.h"
#include <iostream>
using namespace std;


RPSGame::RPSGame()
{
	user=0;
	computer=0;
	numWinUser=0;
	numWinComputer=0;
}
void RPSGame::Run()
{
	cout <<"������ �� �� �Դϱ�? (0:����, 1:����, 2:��) :";
	cin >> user;
	computer = rand()%3;

	cout << "����� : "<< user <<",";
	cout << "��ǻ�� : "<< computer <<endl;
	if( (computer+1 == user)||(user==0 & computer ==2))
	{
		numWinUser++;
		cout << "�¸��Ͽ����ϴ�."<<endl;
		cout <<"\n";
	}
	else if( user == computer)
	{
		cout << "�����ϴ�."<<endl;
		cout <<"\n";
	}
	else
	{
		cout << "�й��Ͽ����ϴ�."<<endl;
		cout <<"\n";
		numWinComputer++;
	}


}
void RPSGame::Print()
{
	cout <<" ������� �¼� :" << numWinUser <<endl;
	cout <<" ��ǻ���� �¼� :" << numWinComputer <<endl;
}