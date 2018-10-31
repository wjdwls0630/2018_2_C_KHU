#include <iostream>
using namespace std;

int money = 10000;

int buy(char* item);

int main() {
	char hand[256];
	while (true) {
		cout << money << "�� ���ҽ��ϴ�." << endl;
		cout << "������ ������ �Է��ϼ���. (����, ����, ���찳, ��, Ǯ, ������)" << endl;
		cout << "> ";
		cin >> hand;

		if (buy(hand) < 0) break;
	}

	return 0;
}

int buy(char* item) {
	int price;
	if (!strcmp(item,"����")) price = 300;
	else if (!strcmp(item, "����")) price = 500;
	else if (!strcmp(item, "���찳")) price = 400;
	else if (!strcmp(item, "��")) price = 1500;
	else if (!strcmp(item, "Ǯ")) price = 1000;
	else if (!strcmp(item, "������")) price = 2500;
	else {
		cout << "���� ��ǰ�Դϴ�.\n������ ������� �����մϴ�.\n�ȳ��� ������!" << endl;
		return -1;
	}

	int quantity;
	cout << item << "�� �ϳ��� " << price << "���Դϴ�." << endl;
	cout << "�� �� �����Ͻðڽ��ϱ�?" << endl;
	cout << "> ";
	cin >> quantity;

	int total = price * quantity;
	cout << "�հ� " << total << "���Դϴ�." << endl;

	if (total > money) {
		cout << (total - money) << "�� �����մϴ�." << endl;
		return 0;
	}

	money -= total;

	return 1;
}