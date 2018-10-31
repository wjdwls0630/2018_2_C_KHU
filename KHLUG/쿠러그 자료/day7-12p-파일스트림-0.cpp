#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	ofstream fs;
	fs.open("file.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			fs << rand() << '\t';
		}
		fs << endl;
	}

	fs.close();

	return 0;
}
