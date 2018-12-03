#include <iostream>
#include <string>

template <typename T1,typename T2>
int Compare(const T1 &a, const T2 &b) {
  if (a>b) {
    return 0;
  } else if (a==b) {
    return 1;
  } else {
    return 2;
  }
}




int main() {

  std::cout << "compare 1 and 2.2 : " <<Compare(1,2.2)<< '\n';
  std::cout << "compare A and S : " <<Compare('A','S')<< '\n';
  std::cout << "compare 10 and Z : " <<Compare(10,'Z')<< '\n';
  std::cout << "compare 'ABC' and 'ABC' : " <<Compare("ABC","ABC")<< '\n';


  return 0;
}
