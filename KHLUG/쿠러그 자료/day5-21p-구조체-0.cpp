#include <iostream>
using namespace std;

struct person {
	char* name;
	int age;
	double height;
};

int main() {
	person people[5];
	for (int i = 0; i < 5; i++) {
		cin >> people[i].name >> people[i].age >> people[i].height;
	}
	for (int i = 0; i < 5; i++) {
		cout << people[i].name << "(" << people[i].name << "), " << people[i].height << "cm" << endl;
	}
	return 0;
}