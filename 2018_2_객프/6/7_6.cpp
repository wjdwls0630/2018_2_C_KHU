#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream myfile("7_6.txt");
  int a =123;
  double b = 12.123456789;
  myfile.width(15);
  myfile<<a<<endl;
  myfile.width(15);
  myfile.precision(10);
  myfile<<b<<endl;
  myfile.close();

  return 0;
}
