#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void get_data(string &filename,int &row,int &col);
void generate_matrix(ofstream &fout,int row,int col);
void print_sum_of_elements(ifstream &fin);

int main() {
  string filename;
  int row, col;
  get_data(filename,row,col);
  ofstream fout(filename);
  generate_matrix(fout,row,col);
  fout.close();

  ifstream fin(filename);
  print_sum_of_elements(fin);
  fin.close();


  return 0;
}
void get_data(string &filename,int &row,int &col){
  std::cout << "Enter the file name: ";
  std::cin >> filename;
  std::cout << "Enter the row and column numbers: ";
  std::cin >> row>>col;

}

void generate_matrix(ofstream &fout,int row,int col) {
  srand(time(NULL));
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i==j) {
        fout.width(3);
        fout<<rand()%101;
      } else {
        fout.width(3);
        fout<<0;
      }
    }
    fout << '\n';
  }
}

void print_sum_of_elements(ifstream &fin) {
  int cInput;
  int sum=0;
  while (fin>>cInput) {
    if (cInput!='\t'&&cInput!='\n') {
      sum+=cInput;
    }
  }
  std::cout << "Sum of all elements: " <<sum<< '\n';
}
