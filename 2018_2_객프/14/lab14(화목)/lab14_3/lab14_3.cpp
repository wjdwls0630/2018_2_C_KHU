#include <iostream>
#include <vector>
#include <fstream>
#include "CStudent.hpp"
#include "FileNotFoundException.hpp"

vector<CStudent> read_file(string& filename);
int main() {
  std::string str;
  std::cout << "파일 이름 : ";
  std::cin >> str;

  try {
    vector<CStudent> numbers = read_file(str);
    for (CStudent value : numbers){
      value.Display();
    }
  }catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
  return 0;
}
vector<CStudent> read_file(string& filename){
  std::vector<CStudent> result;
  CStudent temp;
  string name;
  int number;
  string major;
  std::ifstream ifs(filename);
  if (ifs.fail()) {
    throw FileNotFoundException(filename);
  } else{
    while (ifs) {
      ifs>>name>>number>>major;
      temp.setAll(name, number, major);
      result.push_back(temp);
    }
    return result;
  }
}
