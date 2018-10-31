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

	cout << "�����͸� �ҷ��ɴϴ�..." << endl << endl;

	char cInput;
	int i = 0;

	cout << "0��: ";
	while (ifs.get(cInput)) {
		cout << cInput;
		if (cInput == '\n') {
			cout << ++i << "��: ";
		}
	}
	cout << endl;

	ifs.close();

	return 0;
}