#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ofstream ofs;

	ofs.open("destination.txt");
	if (!ofs) {
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

	int width;
	cout << "결과물의 너비는? ";
	cin >> width;

	char letter_count = 0;

	char cInput;
	while (ifs.get(cInput)) {
		if (cInput != '\n' && cInput != '\t') {
			ofs.put(cInput);
			letter_count++;
			if (letter_count == width) {
				ofs.put('\n');
				letter_count = 0;
			}
		}
	}

	ifs.close();
	ofs.close();

	cout << "끝" << endl;
	
	return 0;
}
