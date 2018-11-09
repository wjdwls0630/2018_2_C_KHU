#include <iostream>
class Adder {
private:
  int total;

public:
  Adder (const int &i =0){
    total=i;
  };
  void addNum(int n) {
    total+=n;
  }
  int getTotal() {
    return total;
  }


};
int main() {
  Adder a;
  a.addNum(10);
  a.addNum(20);
  a.addNum(30);

  std::cout << a.getTotal() << '\n';
  /*
  std::cout << a.total << '\n';
  은 컴파일 에러가 난다 이유는 total이 private영역이기 때문에 외부에서 직접적인 접근이 불가능하다.
  */



  return 0;
}
