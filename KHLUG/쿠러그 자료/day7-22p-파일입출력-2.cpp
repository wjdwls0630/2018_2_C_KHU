#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ofstream ofs;

	ofs.open("destination.txt");
	if (!ifs) {
		cerr << "\aERROR 102: "
			<< "cannot opening file\n";
		exit(100);
	}

	ifs.open("source.txt");
	if (!ifs) {
		cerr << "\aERROR 100: "
			<< "cannot opening file\n";
		exit(100);
	}

	ofs.put(' ');
	ofs.put(' ');
	char cInput;
	while (ifs.get(cInput)) {
		ofs.put(cInput);
		if (cInput == '\n') {
			ofs.put(' ');
			ofs.put(' ');
		}
	}
	ifs.close();

	ofs.close();

	cout << "들여쓰기 끝" << endl;
	
	return 0;
}
