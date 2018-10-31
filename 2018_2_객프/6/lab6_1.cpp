#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void make_write_Tree_for(ofstream &ofs, int height);
void make_write_Tree_while(ofstream &ofs, int height);

int main() {
  int height;


  std::cout << "Enter height of tree: ";
  std::cin >> height;

  ofstream ofs("lab6_1.txt");
  std::cout << "Output" << '\n'<<'\n';
  make_write_Tree_for(ofs,height);
  ofs.close();
  std::cout << "\nWriting process is done" << '\n'<<'\n';

  std::cout << "Opening lab6_1.txt...." << '\n';
  ifstream ifs("lab6_1.txt");
  if (ifs.is_open()) {
    std::cout << "Open lab6_1.txt" << '\n';
    std::cout << "Reading file...." << '\n'<<'\n';
    char cInput;
    while (ifs.get(cInput)) {
      std::cout << cInput;
    }
  } else{
    std::cerr << "\aError 100 : Unable to open lab6_1.txt" << '\n';
    exit(100);
  }
  ifs.close();

  return 0;
}

void make_write_Tree_while(ofstream &ofs, int height){
  char A = 65;
  char V = 86;
  int row=0;
  while (row<height) {
    int count =0;
    while (count<height-row) {
      std::cout << " ";
      ofs.put(' ');
      count++;
    }
    count =0;
    while (count<2*row+1) {
      if (count==0||count==row*2) {
        std::cout << A;
        ofs.put(A);
      } else {
        std::cout << V;
        ofs.put(V);
      }
      count++;
    }
    std::cout  << '\n';
    ofs.put('\n');
    row++;
  }
  int number1=0;

  while (number1 < 2*height+1) {
    std::cout << "O";
    ofs.put('O');
    number1++;
  }
  std::cout  << '\n';
  ofs.put('\n');
  int number2=0;
  while (number2<2) {
    int number3=0;
    while (number3<height-1) {
      std::cout << " ";
      ofs.put(' ');
      number3++;
    }
    int number4=0;
    while (number4<3) {
      std::cout << "|";
      ofs.put('|');
      number4++;
    }
    std::cout << '\n';
    ofs.put('\n');
    number2++;
  }
  std::cout <<  "MERRY CHRISTMAS"<< '\n';
  ofs<<"MERRY CHRISTMAS";
}

void make_write_Tree_for(ofstream &ofs, int height) {
  char A = 65;
  char V = 86;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < height-i; j++) {
      std::cout << " ";
      ofs.put(' ');
    }
    for (int k = 0; k < i*2+1; k++) {
      if (k==0||k==i*2) {
        std::cout << A;
        ofs.put(A);
      } else {
        std::cout << V;
        ofs.put(V);
      }

    }
    std::cout  << '\n';
    ofs.put('\n');

  }

  for (int i = 0; i < 2*(height)+1; i++) {
    std::cout << "O";
    ofs.put('O');
  }
  std::cout  << '\n';
  ofs.put('\n');
  for (int i = 0; i < 2; i++) {
    for (int k = 0; k < height-1; k++) {
      std::cout << " ";
      ofs.put(' ');
    }
    for (int j = 0; j < 3; j++) {
      std::cout << "|";
      ofs.put('|');
    }
    std::cout << '\n';
    ofs.put('\n');
  }
  std::cout <<  "MERRY CHRISTMAS"<< '\n';
  ofs<<"MERRY CHRISTMAS";
}
