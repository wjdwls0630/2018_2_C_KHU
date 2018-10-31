#include <iostream>
using namespace std;

void printLower(char upper);

int main() {
	char letter;

	cout << "대문자를 입력해주세요: ";
	cin >> letter;

	printLower(letter);

	return 0;
}

void printLower(char upper){
	cout << "소문자: " << (char)(upper+32) << endl;
	return;
}