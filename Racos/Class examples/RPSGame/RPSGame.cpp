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
	cout <<"무엇을 낼 것 입니까? (0:가위, 1:바위, 2:보) :";
	cin >> user;
	computer = rand()%3;

	cout << "사용자 : "<< user <<",";
	cout << "컴퓨터 : "<< computer <<endl;
	if( (computer+1 == user)||(user==0 & computer ==2))
	{
		numWinUser++;
		cout << "승리하였습니다."<<endl;
		cout <<"\n";
	}
	else if( user == computer)
	{
		cout << "비겼습니다."<<endl;
		cout <<"\n";
	}
	else
	{
		cout << "패배하였습니다."<<endl;
		cout <<"\n";
		numWinComputer++;
	}


}
void RPSGame::Print()
{
	cout <<" 사용자의 승수 :" << numWinUser <<endl;
	cout <<" 컴퓨터의 승수 :" << numWinComputer <<endl;
}