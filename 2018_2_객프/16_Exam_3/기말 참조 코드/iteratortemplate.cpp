#include <iostream>
#include <list>
#include <algorithm>

template<typename Iter, typename T>
bool search(Iter begin, Iter end, const T & seek);
int main() {
  int num=1;
  bool find;
  std::list<int>list1(5);
  std::for_each(list1.begin(),list1.end(),[&num](int &x)->void{ x=num; num++;});
  find=search(list1.begin(),list1.end(),2);
  std::cout << "찾음 : " <<find <<'\n';
  return 0;
}

template<typename Iter, typename T>
bool search(Iter begin, Iter end, const T & seek){
  for (Iter i = begin; i != end; i++) {
    if (*i==seek) {
      return true;
    }
  }
  return false;
}
