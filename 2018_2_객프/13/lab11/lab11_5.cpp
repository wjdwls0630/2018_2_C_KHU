#include <iostream>
#include <list>
#include <cmath>
#include <algorithm>

template<typename T>
void print(const T &a){
  double sum=0;
  for_each(a.begin(),a.end(),[&sum](const double &x)->void {sum+=x;});
  double mean=sum/a.size();
  double var=0;
  for_each(a.begin(),a.end(),[&var,&mean](const double &x)->void{var+=pow((x-mean),2);});
  var/=a.size();
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
