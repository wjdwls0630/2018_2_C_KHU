#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs1, ifs2;
  ofstream ofs;
  char cInput;
  ifs1.open("lab6_4_1.txt");
  ifs2.open("lab6_4_2.txt");
  ofs.open("lab6_4_3.txt");

  while (ifs1.get(cInput)) {
    ofs.put(cInput);
  }
  ofs.put('\n');
  while (ifs2.get(cInput)) {
    ofs.put(cInput);
  }
  ifs1.close();
  ifs2.close();
  ofs.close();


  return 0;
}
