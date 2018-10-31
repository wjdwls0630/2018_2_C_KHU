#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int size;
    std::cout << "Please enter the table size: ";
    std::cin >>size;
    std::cout << setw(4) << ' ';
    for(int i = 1; i <=size ; i++)
    {
        std::cout <<setw(4) <<i ;
    }
    std::cout << '\n';
    std::cout <<setw(4)<< "+";

    for(int i = 0; i < size*4; i++)
    {
        std::cout << "-" ;
    }
    std::cout  << '\n';

    for (int i = 1; i <= size; i++) {
      std::cout <<setw(2) <<i<<" |";
      for (int j = 1; j <=size; j++) {
        if (i==j) {
          std::cout << setw(4) <<"X";
        } else {
          std::cout <<setw(4) <<i%j ;
        }
      }
      std::cout  << '\n';
    }







    return 0;
}
