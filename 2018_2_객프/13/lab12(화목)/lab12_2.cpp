#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using Iter=std::vector<int>::iterator;
int main() {
  srand(time(NULL));
  std::vector<int> vec1(10);

  for (Iter iter=std::begin(vec1); iter!=std::end(vec1); iter++) {
    *iter=rand()%10+1;
  }
  std::vector<int> vec2(10);
  for (Iter iter=std::begin(vec2); iter!=std::end(vec2); iter++) {
    *iter=rand()%20+1;
  }
  int target_big=0;
  int target_small=200;
  int result=0;
  for (Iter iter1=std::begin(vec1); iter1!=std::end(vec1); iter1++) {
    for (Iter iter2=std::begin(vec2); iter2!=std::end(vec2); iter2++) {
      result=(*iter1)*(*iter2);
      if (target_big<result) {
        target_big=result;
      } else if (target_small>result){
        target_small=result;
      }
    }
  }
  std::cout << "<vector 1>" << '\n';
  for (Iter iter=std::begin(vec1); iter!=std::end(vec1); iter++) {
    std::cout << *iter << ' ';
  }
  std::cout << '\n';
  std::cout << "<vector 2>" << '\n';
  for (Iter iter=std::begin(vec2); iter!=std::end(vec2); iter++) {
    std::cout << *iter << ' ';
  }
  std::cout << '\n';
  std::cout << "최댓값 = " <<target_big <<'\n';
  std::cout << "최솟값 = " <<target_small <<'\n';



  return 0;
}
