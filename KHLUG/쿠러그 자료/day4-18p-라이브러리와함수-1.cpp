#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool game(char* hand);

int main() {
	srand(time(NULL));

	char hand[256];
	while (true) {
		cout << "����, ����, �� �� �ϳ��� �Է��ϼ���." << endl;
		cout << "�����: ";
		cin >> hand;

		if (game(hand)) break;
		else continue;
	}

	return 0;
}

bool game(char* hand) {
	int user;
	if (!strcmp(hand,"����")) user = 1;
	else if (!strcmp(hand, "����")) user = 0;
	else if (!strcmp(hand, "��")) user = 2;
	else return false;

	cout << "��ǻ��: ";
	int computer = rand() % 3;
	if (computer == 0) cout << "����";
	else if (computer == 1) cout << "����";
	else if (computer == 2) cout << "��";
	cout << endl;

	if (user == computer) {
		cout << "�����ϴ�." << endl;
		return false;
	}
	else if (computer - user == 1 || (user == 2 && computer == 0))
		cout << "�̰���ϴ�!" << endl;
	else
		cout << "�����ϴ�.,," << endl;
	cout << endl;

	return true;
}