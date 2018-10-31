#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream fs;
  fs.open("day07_1.txt");
  fs<<405<<endl
    <<406<<'\t'
    <<409;
  fs.close();





  return 0;
}
