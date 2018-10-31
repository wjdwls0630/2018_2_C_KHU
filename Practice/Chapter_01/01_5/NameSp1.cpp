#include <iostream>

namespace BestComImpl {
  void SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << '\n';
  }

} /*BestComImpl */

namespace ProgComImpl {
  void SimpleFunc(void) {
    std::cout << "ProgCom이 정의한 함수" << '\n';
  }
} /*ProgComImpl */


int main(void) {
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
  return 0;
}
