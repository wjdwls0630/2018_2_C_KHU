#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs("lab6_5_1.txt");
  ofstream ofs("lab6_5_2.txt");
  int length,countChar=0;
  char cInput;
  std::cout << "length = " ;
  std::cin >> length;


  while (ifs.get(cInput)) {
    if (countChar==length) {
      if (cInput=='\n') {
        std::cout<< cInput;
        ofs<<cInput;
      } else {
        std::cout <<'\n' <<cInput;
        ofs<<'\n'<<cInput;

      }
      countChar=0;
    } else {
      if (cInput=='\n') {
        std::cout << ' ';
        ofs<<' ';
      } else {
        std::cout << cInput;
        ofs<<cInput;
      }
      countChar++;

    }


  }




  return 0;
}
