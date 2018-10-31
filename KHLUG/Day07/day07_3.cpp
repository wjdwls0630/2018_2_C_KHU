#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream fs;
  fs.open("notexist.txt");
  if (!fs) {
    std::cerr << "\aERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }
  fs.close();
  if (fs.fail()) {
    std::cerr << "\aERROR 102: " <<"cannot closing file"<< '\n';
    exit(102);
  }

  return 0;
}
