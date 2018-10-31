#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream fs;
  fs.open("day07_5.txt",fstream::out);

  fs.width(10);
  fs<<"Hello"<<endl;
  fs.fill('0'); fs.width(10);
  fs<<12345<<endl;
  fs.precision(8);
  fs<<1.0/7.0<<endl;

  return 0;
}
