#include <iostream>
using namespace std;

void printLower(char upper);

int main() {
	char letter;

	cout << "�빮�ڸ� �Է����ּ���: ";
	cin >> letter;

	printLower(letter);

	return 0;
}

void printLower(char upper){
	cout << "�ҹ���: " << (char)(upper+32) << endl;
	return;
}