#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int size;
  std::cout << "Please enter the table size: " ;
  std::cin >> size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(j==i||j==size-1-i){
        std::cout <<setw(2) <<"+" ;
      } else {
        std::cout <<setw(2)<< "=";
      }
    }
    std::cout  << '\n';
  }
  return 0;
}
