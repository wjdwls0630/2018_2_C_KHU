#ifndef RandomMatrix_hpp
#define RandomMatrix_hpp
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Matrix.hpp"
class RandomMatrix : public Matrix<int>  {
private:
  std::ofstream ofs;
public:
  RandomMatrix ();
};
RandomMatrix::RandomMatrix():ofs("lab14_4.txt"){
  srand((unsigned)time(NULL));
  for (int i = 0; i < this->getMatrix().size(); i++) {
    for (int j = 0; j < this->getMatrix()[i].size(); j++) {
      this->getMatrix()[i][j]=rand()%101;
      ofs.width(3);
      ofs<<this->getMatrix()[i][j]<<' ';
    }
    ofs<<'\n';
  }
  ofs.close();
  this->getMatrix().clear();
}


#endif /* RandomMatrix_hpp */
