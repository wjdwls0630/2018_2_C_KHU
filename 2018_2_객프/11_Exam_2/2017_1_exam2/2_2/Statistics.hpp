#ifndef Statistics_hpp
#define Statistics_hpp
#include <iostream>
#include "Error1.hpp"

template<typename T>
class Statistics {
private:
  T *DataList;
  int NumOfData;
  int ListSize;
public:
  Statistics (const int &size=10);
  virtual ~Statistics ();
  Statistics<T>& operator<<(const T &n);
  Statistics<T>& operator>>(float &avg);
  bool operator !();
  Statistics<T>& operator ~();
};
template<typename T>Statistics<T>::Statistics(const int &size) : DataList(new T[size]),NumOfData(0),ListSize(size){}
template<typename T>Statistics<T>::~Statistics (){ delete [] DataList;}
template<typename T>Statistics<T>& Statistics<T>::operator<<(const T &n){
  if (this->NumOfData==this->ListSize) {
    T * temp=new T[this->ListSize];
    for (int i = 0; i < this->ListSize; i++) {
      temp[i]=DataList[i];
    }
    delete [] this->DataList;
    DataList=new T[this->ListSize*2];
    for (int i = 0; i < this->ListSize; i++) {
      DataList[i]=temp[i];
    }
    this->ListSize*=2;
    delete [] temp;
    throw ListIsFull();
  }
  this->DataList[NumOfData]=n;
  NumOfData++;
  return *this;
}
template<typename T>Statistics<T>& Statistics<T>::operator>>(float &avg){
  int sum=0;
  for (int i = 0; i < this->NumOfData; i++) {
    sum+=this->DataList[i];
  }
  avg=sum/this->NumOfData;
  return *this;
}
template<typename T>bool Statistics<T>::operator !(){
  if (this->NumOfData==0) {
    return false;
  }else{
    return true;
  }
}
template<typename T>Statistics<T>& Statistics<T>::operator~(){
  for (int i = 0; i < this->NumOfData; i++) {
    std::cout << this->DataList[i] << ' ';
  }
  std::cout << '\n';
  return *this;
}


#endif /* Statistics_hpp */
