#include <iostream>
#include <fstream>


using namespace std;

int main() {
  ifstream ifs;
  ofstream ofs;
  ifs.open("day07_12_1.txt");
  ofs.open("day07_14.txt");
  if (!ifs) {
    std::cout << "\aERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }

  char current;
  char pre;
  ofs.put(' ');
  ofs.put(' ');
  std::cout << "  ";
  while (ifs.get(current)) {
    ofs.put(current);
    std::cout << current;
    if (current=='\n') {
      ofs.put(' ');
      ofs.put(' ');
      std::cout <<"  ";
    }
  }
  ifs.close();
  ofs.close();

  return 0;
}
