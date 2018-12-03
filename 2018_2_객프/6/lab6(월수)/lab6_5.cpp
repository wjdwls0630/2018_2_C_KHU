#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
 int main() {
   ofstream ofs("lab6_5.txt");
   int size;  // The number of rows and columns in the table
   std::cout << "Please enter the table size: ";
   std::cin >> size;
   // Print a size x size multiplication table
   // First, print heading
   std::cout << "      ";
   ofs<<"      ";
   for (int column = 1; column <= size; column++){
     std::cout << std::setw(4) << column; // Print heading for this column.
     ofs.width(4);
     ofs<<column;
   }
   std::cout << '\n';
   ofs<<'\n';
   // Print line separator
   std::cout << "     +";
   ofs<<"     +";
   for (int column = 1; column <= size; column++){
     std::cout << "----"; // Print separator for this column.
     ofs<<"----";
   }
   std::cout << '\n';
   ofs<< '\n';
   // Print table contents
   for (int row = 1;  row <= size; row++) {
    std::cout << std::setw(4) << row << " |";  // Print row label.
    ofs.width(4);
    ofs<< row << " |";
     for (int column = 1; column <= size; column++){
       std::cout << std::setw(4) << row*column;   // Display product
       ofs.width(4);
       ofs<< row*column;
     }
    std::cout << '\n';
    ofs<<'\n';
   }
   ofs.close();

   int row_num;
   string line;
   ifstream ifs("lab6_5.txt");
   std::cout << "what row_num do you want? : " ;
   std::cin >> row_num;
   for (int i = 0; i < row_num+2; i++) {
     getline(ifs,line);
   }//첫줄 과  +----- 줄 읽고 그 다음부터 getline
   std::cout << line << '\n';

  return 0;
}
