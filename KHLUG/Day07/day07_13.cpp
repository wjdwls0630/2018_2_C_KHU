#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs1,ifs2;
  ofstream ofs;
  ifs1.open("day07_12_1.txt");
  ifs2.open("day07_12_2.txt");
  ofs.open("day07_13.txt");
  if (!ifs1 || !ifs2) {
    std::cerr << "\a ERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }
  char cInput;
  while (ifs1.get(cInput)) {
    ofs.put(cInput);
  }
  while (ifs2.get(cInput)) {
    ofs.put(cInput);
  }
  ifs1.close();
  ifs2.close();
  ofs.close();




  return 0;
}
