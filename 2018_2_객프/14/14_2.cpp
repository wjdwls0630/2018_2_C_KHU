#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class FileNotFoundException : public std::exception {
private:
  std::string message;
public:
  FileNotFoundException (const std::string &fname);
  virtual const char * what() const throw();
};
std::vector<int> load_vector(const std::string &fname);

int main() {
  try{
    std::vector<int> numbers=load_vector("value.txt");
    for (int value : numbers) {
      std::cout << value << ' ';
    }
    std::cout << '\n';
  }catch(std::exception & e){
    std::cout << e.what() << '\n';
  }

  return 0;
}
FileNotFoundException::FileNotFoundException (const std::string &fname)
:message("File \""+fname+"\" not found"){}
const char * FileNotFoundException::what() const throw(){return message.c_str();}

std::vector<int> load_vector(const std::string &fname){
  std::ifstream fin(fname);
  if (fin.good()) {
    std::vector<int> result;
    int n,value;
    fin>>n;
    for (int i = 0; i < n; i++) {
      fin>>value;
      result.push_back(value);
    }
    return result;
  }else {
    throw FileNotFoundException(fname);
  }
}
