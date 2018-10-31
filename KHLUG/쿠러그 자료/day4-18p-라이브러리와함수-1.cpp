#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool game(char* hand);

int main() {
	srand(time(NULL));

	char hand[256];
	while (true) {
		cout << "가위, 바위, 보 중 하나를 입력하세요." << endl;
		cout << "사용자: ";
		cin >> hand;

		if (game(hand)) break;
		else continue;
	}

	return 0;
}

bool game(char* hand) {
	int user;
	if (!strcmp(hand,"가위")) user = 1;
	else if (!strcmp(hand, "바위")) user = 0;
	else if (!strcmp(hand, "보")) user = 2;
	else return false;

	cout << "컴퓨터: ";
	int computer = rand() % 3;
	if (computer == 0) cout << "바위";
	else if (computer == 1) cout << "가위";
	else if (computer == 2) cout << "보";
	cout << endl;

	if (user == computer) {
		cout << "비겼습니다." << endl;
		return false;
	}
	else if (computer - user == 1 || (user == 2 && computer == 0))
		cout << "이겼습니다!" << endl;
	else
		cout << "졌습니다.,," << endl;
	cout << endl;

	return true;
}