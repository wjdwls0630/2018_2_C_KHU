#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fs;
	fs.open("text.txt");
	if (!fs) {
		cerr << "\Aerror 100: "
			<< "cannot opening file\n";
		exit(100);
	}
	char current;
	int countWord = 0;
	bool inWordPre = false;
	bool inWordCurrent = false;

	while (fs.get(current)) {
		if (current == '\n' || current == '\t' || current == ' ')
			inWordCurrent = false;
		else
			inWordCurrent = true;

		if (inWordPre == true && inWordCurrent == false)
			countWord++;

		inWordPre = inWordCurrent;
	}

	if (!(current == '\n' || current == '\t' || current == ' '))
		countWord++;

	cout << "´Ü¾î ¼ö: " << countWord << endl;

	fs.close();
	
	return 0;
}
