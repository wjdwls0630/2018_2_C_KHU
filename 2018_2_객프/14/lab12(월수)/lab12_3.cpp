#include <iostream>
#include <iomanip>
#include <fstream>

class FileNotFoundException : public std::exception {
private:
  std::string message;
public:
  FileNotFoundException (const std::string &fname):message("File \""+fname+"\" not found!"){}
  virtual const char * what() const throw(){return message.c_str();}
};
class Myfstream : public std::fstream {
private:
  std::string filename;
public:
  Myfstream (const std::string &fName);
  virtual ~Myfstream ();
  std::string getFileName() const;
};
class Myifstream : public Myfstream{
private:
  std::ifstream ifs;
public:
  Myifstream (const std::string &fName);
  virtual ~Myifstream ();
  void ReadFile();
  void close() ;
};
class Myofstream : public Myfstream{
private:
  std::ofstream ofs;
public:
  Myofstream (const std::string &fName);
  virtual ~Myofstream ();
  void make_write_Tree_while(const int &height);
  void make_write_Tree_for(const int &height);
  void close() ;
};

using namespace std;

int main() {
  try{
    std::cout << "Check the File \"lab12_3_1.txt\" existed...." << '\n';
    Myifstream ifs1("lab12_3_1.txt");
    std::cout << "File \"lab12_3_1.txt\" is existed" << '\n';
    std::cout << "Opening \"lab12_3_1.txt\"...." << '\n';
    std::cout << "Open \"lab12_3_1.txt\"" << '\n';
    std::cout << "Reading file...." << '\n'<<'\n';
    ifs1.ReadFile();
  }catch(std::exception &ex){
    std::cout << ex.what() << '\n';
  }
  int height;
  Myofstream ofs1("lab12_3.txt");

  std::cout << "Make New Tree!" << '\n';
  std::cout << "Enter height of tree: ";
  std::cin >> height;

  std::cout << "Output" << '\n'<<'\n';
  ofs1.make_write_Tree_for(height);
  std::cout << "\nWriting process is done" << '\n'<<'\n';
  ofs1.close();


  try{
    std::cout << "Check the File \"lab12_3.txt\" existed...." << '\n';
    Myifstream ifs2("lab12_3.txt");
    std::cout << "File \"lab12_3.txt\" is existed" << '\n';
    std::cout << "Opening \"lab12_3.txt\"...." << '\n';
    std::cout << "Open \"lab12_3.txt\"" << '\n';
    std::cout << "Reading file...." << '\n'<<'\n';
    ifs2.ReadFile();
    ifs2.close();
  }catch(std::exception &ex){
    std::cout << ex.what() << '\n';
  }
  return 0;
}

Myfstream::Myfstream (const std::string &fName):filename(fName){}
Myfstream::~Myfstream(){}

std::string Myfstream::getFileName() const{ return this->filename;}



Myifstream::Myifstream (const std::string &fName):Myfstream(fName){
  this->ifs.open(fName);
  if(ifs.fail()){
    throw FileNotFoundException(this->getFileName());
  }
}
Myifstream::~Myifstream (){this->ifs.close();}
void Myifstream::ReadFile(){
  char cInput;
  while (this->ifs.get(cInput)) {
    std::cout << cInput;
  }
}

void Myifstream::close() {this->ifs.close();}

Myofstream::Myofstream (const std::string &fName):Myfstream(fName){
  this->ofs.open(fName);
  if(ofs.fail()){
    throw FileNotFoundException(this->getFileName());
  }
}
Myofstream::~Myofstream (){this->ofs.close();}

void Myofstream::make_write_Tree_while(const int &height){
  char A = 65;
  char V = 86;
  int row=0;
  while (row<height) {
    int count =0;
    while (count<height-row) {
      std::cout << " ";
      this->ofs.put(' ');
      count++;
    }
    count =0;
    while (count<2*row+1) {
      if (count==0||count==row*2) {
        std::cout << A;
        this->ofs.put(A);
      } else {
        std::cout << V;
        this->ofs.put(V);
      }
      count++;
    }
    std::cout  << '\n';
    this->ofs.put('\n');
    row++;
  }
  int number1=0;

  while (number1 < 2*height+1) {
    std::cout << "O";
    this->ofs.put('O');
    number1++;
  }
  std::cout  << '\n';
  this->ofs.put('\n');
  int number2=0;
  while (number2<2) {
    int number3=0;
    while (number3<height-1) {
      std::cout << " ";
      this->ofs.put(' ');
      number3++;
    }
    int number4=0;
    while (number4<3) {
      std::cout << "|";
      this->ofs.put('|');
      number4++;
    }
    std::cout << '\n';
    this->ofs.put('\n');
    number2++;
  }
  std::cout <<  "MERRY CHRISTMAS"<< '\n';
  this->ofs<<"MERRY CHRISTMAS";
}

void Myofstream::make_write_Tree_for(const int &height) {
  char A = 65;
  char V = 86;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < height-i; j++) {
      std::cout << " ";
      this->ofs.put(' ');
    }
    for (int k = 0; k < i*2+1; k++) {
      if (k==0||k==i*2) {
        std::cout << A;
        this->ofs.put(A);
      } else {
        std::cout << V;
        this->ofs.put(V);
      }

    }
    std::cout  << '\n';
    this->ofs.put('\n');

  }

  for (int i = 0; i < 2*(height)+1; i++) {
    std::cout << "O";
    this->ofs.put('O');
  }
  std::cout  << '\n';
  this->ofs.put('\n');
  for (int i = 0; i < 2; i++) {
    for (int k = 0; k < height-1; k++) {
      std::cout << " ";
      this->ofs.put(' ');
    }
    for (int j = 0; j < 3; j++) {
      std::cout << "|";
      this->ofs.put('|');
    }
    std::cout << '\n';
    this->ofs.put('\n');
  }
  std::cout <<  "MERRY CHRISTMAS"<< '\n';
  this->ofs<<"MERRY CHRISTMAS";
}
void Myofstream::close() {this->ofs.close();}
