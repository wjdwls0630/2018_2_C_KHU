#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs;
  ofstream ofs;
  std::cout << "파일 복사 시작" << '\n';

  ifs.open("day07_9.txt");
  if (!ifs) {
    std::cerr << "\aERROR 100: " <<"Cannot opening file" <<'\n';
    exit(100);
  }
  ofs.open("day07_10.txt");
  if (!ofs) {
    std::cerr << "\aERROR 100: " <<"Cannot opening file" <<'\n';
    exit(100);
  }
  char cInput;
  while (ifs.get(cInput)) {
    ofs.put(cInput);
  }
  ifs.close();
  ofs.close();

  return 0;
}
