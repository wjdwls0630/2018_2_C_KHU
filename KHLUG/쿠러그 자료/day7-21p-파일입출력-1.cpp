#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ofstream ofs;
	cout << "���� ���� ����" << endl;

	char cInput;

	cout << "���� ������ ���ϴ�." << endl;
	ofs.open("copy.txt");
	if (!ifs) {
		cerr << "\aERROR 102: "
			<< "cannot opening file\n";
		exit(100);
	}

	cout << "ù ��° �ҽ� ������ �����մϴ�." << endl;
	ifs.open("source1.txt");
	if (!ifs) {
		cerr << "\aERROR 100: "
			<< "cannot opening file\n";
		exit(100);
	}

	while (ifs.get(cInput))
		ofs.put(cInput);
	ifs.close();

	ofs.put('\n');

	cout << "�� ��° �ҽ� ������ �����մϴ�." << endl;
	ifs.open("source2.txt");
	if (!ifs) {
		cerr << "\aERROR 100: "
			<< "cannot opening file\n";
		exit(100);
	}

	while (ifs.get(cInput))
		ofs.put(cInput);
	ifs.close();

	ofs.close();

	cout << "���� ���� ��" << endl;
	
	return 0;
}
