#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ofstream ofs;
	cout << "파일 병합 시작" << endl;

	char cInput;

	cout << "목적 파일을 엽니다." << endl;
	ofs.open("copy.txt");
	if (!ifs) {
		cerr << "\aERROR 102: "
			<< "cannot opening file\n";
		exit(100);
	}

	cout << "첫 번째 소스 파일을 복사합니다." << endl;
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

	cout << "두 번째 소스 파일을 복사합니다." << endl;
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

	cout << "파일 병합 끝" << endl;
	
	return 0;
}
