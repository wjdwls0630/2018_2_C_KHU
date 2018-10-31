#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string line;
  ifstream myfile1("7_4.txt");
  if (myfile1.is_open()) {
    while (getline(myfile1, line)) {
      std::cout << line << '\n';
    }
    myfile1.close();
  }else {
    std::cout << "Unable to open 7_4.txt" << '\n';
    std::cout  << '\n';

  }

  ifstream myfile2("7_3.txt");

  if (myfile2.is_open()) {
    while (getline(myfile2, line)) {
      std::cout << line << '\n';
    }
    myfile2.close();
  }else {
    std::cout << "Unable to open 7_3.txt" << '\n';

  }


  return 0;
}
