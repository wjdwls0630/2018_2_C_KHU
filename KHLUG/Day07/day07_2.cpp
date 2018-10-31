#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream fs1;
  fs1.open("day07_2.txt");
  fs1<<405<<endl
    <<406<<'\t'
    <<409;
  fs1.close();

  ifstream fs2;
  fs2.open("day07_2.txt");
  int data1, data2, data3;
  fs2>>data1>>data2>>data3;
  fs2.close();

  std::cout << data1 << '\n';
  std::cout << data2 << '\n';
  std::cout << data3 << '\n';
  return 0;
}
