#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fs;
	fs.open("file.txt");

	if (!fs) {
		cerr << "\aERROR 100: "
			<< "cannot opening file\n";
		exit(100);
	}

	int data[10];
	int total;
	for (int i = 0; i < 10; i++) {
		total = 0;
		for (int j = 0; j < 10; j++) {
			fs >> data[j];
			total += data[j];
		}
		cout << i << "번째 줄의 평균: " << ((double)total / 10) << endl;
	}

	fs.close();

	if (fs.fail()) {
		cerr << "\aERROR 1002 "
			<< "cannot closing file\n";
		exit(102);
	}
	return 0;
}
