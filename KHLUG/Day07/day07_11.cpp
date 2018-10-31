#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs;
  ifs.open("day07_10.txt");
  if (!ifs) {
    std::cout << "\aERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }
  char current;
  char pre;
  int countChar=0;
  int countLine=0;

  while (ifs.get(current)) {
    if (current!='\n') {
      countChar++;
    } else {
      countLine++;
    }
    pre =current;
  }
  if (pre!='\n') {
    countLine++;
  }
  ifs.close();
  std::cout << "���� ��: " <<countChar<< '\n';
  std::cout << "�� ��: " <<countLine<< '\n';
  return 0;
}
