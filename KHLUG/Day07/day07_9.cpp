#include <iostream>
#include <fstream>

using namespace std;
int main() {
  ofstream fs;
  std::cout << "파일 만들기 시작" << '\n';

  fs.open("day07_9.txt");
  if (!fs) {
    std::cerr << "\aERROR 100: " <<"Cannot opening file" <<'\n';
    exit(100);
  }

  char cInput;
  while (cin.get(cInput)) {
    fs.put(cInput);
  }
  fs.close();
  std::cout << "파일 만들기 종료" << '\n';
  return 0;
}
