#include <iostream>

namespace BestComImpl {
  void SimpleFunc(void);
  void PrettyFunc(void);

} /*BestComImpl */

namespace ProgComImpl {
  void SimpleFunc(void);
} /*ProgComImpl */


int main(void) {
  BestComImpl::SimpleFunc();
  return 0;
}

void BestComImpl::SimpleFunc(void) {
  std::cout << "BestCom이 정의한 함수" << '\n';
  PrettyFunc();
  ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void) {
  std::cout << "So Pretty!!" << '\n';
}

void ProgComImpl::SimpleFunc(void) {
  std::cout << "Progcom이 정의한 함수" << '\n';
}
