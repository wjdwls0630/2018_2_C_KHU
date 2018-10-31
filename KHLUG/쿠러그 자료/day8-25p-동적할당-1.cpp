#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ifs.open("database.txt");

	ifs.unsetf(ios_base::skipws);

	if (!ifs) {
		cerr << "\aERROR 100: "
			<< "cannot opening file\n";
		exit(100);
	}

	cout << "데이터를 불러옵니다..." << endl << endl;

	char cInput;
	int i = 0;

	cout << "0행: ";
	while (ifs.get(cInput)) {
		cout << cInput;
		if (cInput == '\n') {
			cout << ++i << "행: ";
		}
	}
	cout << endl;

	ifs.close();

	return 0;
}