#include <iostream>
using namespace std;

double cube(double num);

int main() {
	double number;

	cout << "숫자를 입력해주세요: ";
	cin >> number;

	cout << cube(number) << endl;

	return 0;
}

double cube(double num){
	return num*num;
}