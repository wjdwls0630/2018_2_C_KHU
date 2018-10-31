#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs1,ifs2;
  ifs1.open("day07_12_1.txt");
  ifs2.open("day07_12_2.txt");
  if (!ifs1||!ifs2) {
    std::cout << "\aERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }
  char current;
  char pre;
  int countWord1=0;
  int countWord2=0;


  while (ifs1.get(current)) {
    if (current==' '||current=='\n'||current=='\t') {
      countWord1++;
    }
    pre =current;
  }
  if (pre!=' '||pre!='\n'||pre!='\t') {
    countWord1++;
  }

  while (ifs2.get(current)) {
    if (current==' '||current=='\n'||current=='\t') {
      countWord2++;
    }
    pre =current;
  }
  if (pre!=' '||pre!='\n'||pre!='\t') {
    countWord2++;
  }
  ifs1.close();
  std::cout << "day07_12_1 단어 수: " <<countWord1<< '\n';
  std::cout << "day07_12_2 단어 수: " <<countWord2<< '\n';
  return 0;
}
