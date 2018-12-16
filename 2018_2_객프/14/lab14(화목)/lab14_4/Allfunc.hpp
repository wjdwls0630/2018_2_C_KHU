#ifndef Allfunc_hpp
#define Allfunc_hpp

#include <fstream>
#include "FileNotFoundException.hpp"
#include "Matrix.hpp"
template<typename T>
Matrix<T> loadMatrix(std::string &fileName){
  std::ifstream ifs(fileName);
  Matrix<T> result;
  if (ifs.fail()) {
    throw FileNotFoundException(fileName);
  } else{
    for (int i = 0; i < result.size(); i++) {
      for (int j = 0; j < result[i].size(); j++) {
        ifs>>result[i][j];
      }
    }
    result.print();
    return result;
  }
}



#endif /* Allfunc_hpp */
