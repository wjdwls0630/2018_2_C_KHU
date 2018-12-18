#ifndef Myifstream_hpp
#define Myifstream_hpp
#include "Myfstream.hpp"
#include "../Error/FileNotFoundException.hpp"

class Myifstream : public Myfstream{
private:
  std::ifstream ifs;
public:
  Myifstream (const std::string &fName);
  virtual ~Myifstream ();
  int ReadLine(std::string &id,int &prob1, int &prob2, int&prob3 );
  void close() override ;
};


Myifstream::Myifstream (const std::string &fName):Myfstream(fName){
  this->ifs.open("./Data/"+fName);
  if(ifs.fail()){
    throw FileNotFoundException(this->getFileName());
  }
}
Myifstream::~Myifstream (){this->ifs.close();}
int Myifstream::ReadLine(std::string &id,int &prob1, int &prob2, int&prob3 ){
  if (this->ifs) {
    this->ifs>>id>>prob1>>prob2>>prob3;
    return 1;
  }
  return 0;
}

void Myifstream::close() {this->ifs.close();}

#endif /* Myifstream_hpp */
