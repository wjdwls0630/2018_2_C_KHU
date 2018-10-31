#include <iostream>
using namespace std;

int money = 10000;

int buy(char* item);

int main() {
	char hand[256];
	while (true) {
		cout << money << "원 남았습니다." << endl;
		cout << "구매할 물건을 입력하세요. (연필, 볼펜, 지우개, 자, 풀, 테이프)" << endl;
		cout << "> ";
		cin >> hand;

		if (buy(hand) < 0) break;
	}

	return 0;
}

int buy(char* item) {
	int price;
	if (!strcmp(item,"연필")) price = 300;
	else if (!strcmp(item, "볼펜")) price = 500;
	else if (!strcmp(item, "지우개")) price = 400;
	else if (!strcmp(item, "자")) price = 1500;
	else if (!strcmp(item, "풀")) price = 1000;
	else if (!strcmp(item, "테이프")) price = 2500;
	else {
		cout << "없는 물품입니다.\n오늘은 여기까지 영업합니다.\n안녕히 가세요!" << endl;
		return -1;
	}

	int quantity;
	cout << item << "은 하나에 " << price << "원입니다." << endl;
	cout << "몇 개 구입하시겠습니까?" << endl;
	cout << "> ";
	cin >> quantity;

	int total = price * quantity;
	cout << "합계 " << total << "원입니다." << endl;

	if (total > money) {
		cout << (total - money) << "원 부족합니다." << endl;
		return 0;
	}

	money -= total;

	return 1;
}