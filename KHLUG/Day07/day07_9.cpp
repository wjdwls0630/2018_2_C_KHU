#include <iostream>
#include <fstream>

using namespace std;
int main() {
  ofstream fs;
  std::cout << "���� ����� ����" << '\n';

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
  std::cout << "���� ����� ����" << '\n';
  return 0;
}
