#include <iostream>
#include <list>
#include <cmath>
#include <algorithm>
template<typename T>
double getSum(const T &a) {
  double sum=0;
  for (auto p=a.begin(); p != a.end(); p++) {
    sum+=*p;
  }
  return sum;
}
template<typename T>
double getVar(const T &a,const double &mean){
  double var=0;
  for (auto p=a.begin(); p != a.end(); p++) {
    var+=pow((*p-mean),2);
  }
  var/=a.size();
  return var;
}
template<typename T>
void print(const T &a){
  double sum=getSum(a);
  double mean=sum/a.size();
  double var=getVar(a,mean);
  double stddev=sqrt(var);
  //std::list<int>::iterator iter=std::begin(a);

  std::cout << "sum : " <<sum <<'\n';
  std::cout << "mean : " <<mean<<'\n';
  std::cout << "var : " <<var <<'\n';
  std::cout << "stddev : " <<stddev <<'\n';

  std::cout << "before normalization " << '\n';
  for (auto p=a.begin(); p != a.end(); p++) {
    std::cout << *p << ' ';
  }
  std::cout  << '\n';

  std::cout << "after normalization " << '\n';
  for (auto p=a.begin(); p != a.end(); p++) {
    std::cout << (*p-mean)/stddev << ' ';
  }
  std::cout  << '\n';

}
int main() {
  std::list<double> myList;
  myList.push_back(644.4);
  myList.push_back(381.65);
  myList.push_back(844.92);
  myList.push_back(430.42);
  myList.push_back(79.87);
  myList.push_back(225.03);
  myList.push_back(823.27);
  myList.push_back(317.29);
  myList.push_back(788.4);
  myList.push_back(426.12);




  print(myList);

  return 0;
}
