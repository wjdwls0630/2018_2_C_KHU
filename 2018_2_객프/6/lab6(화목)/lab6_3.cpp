#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  ofstream ofs("lab6_3.txt");
  srand(time(NULL));
  int random_num;
  for (size_t i = 0; i < 10; i++) {
    for (size_t j = 0; j < 10; j++) {
      random_num=rand()%100+1;
      std::cout<<setw(3) << random_num ;
      ofs.width(3);
      ofs<<random_num ;
    }
    std::cout  << '\n';
    ofs<<'\n';
  }

  return 0;
}
