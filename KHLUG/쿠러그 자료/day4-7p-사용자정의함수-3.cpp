#include <iostream>
using namespace std;

double cube(double num);

int main() {
	double number;

	cout << "���ڸ� �Է����ּ���: ";
	cin >> number;

	cout << cube(number) << endl;

	return 0;
}

double cube(double num){
	return num*num;
}