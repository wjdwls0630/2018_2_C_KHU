#ifndef Myifstream_hpp
#define Myifstream_hpp
#include "../Error/FileNotFoundException.hpp"

class Myifstream : public Myfstream{
private:
  std::ifstream ifs;
public:
  Myifstream (const std::string &fName);
  virtual ~Myifstream ();
  void ReadFile();
  void close() ;
};


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

#endif /* Myifstream_hpp */
