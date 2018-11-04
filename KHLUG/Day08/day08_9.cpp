#include <iostream>

int main() {
  int a[]={3,4,5,7,10,13,2};
  int*pLarge;
  int *pHand;
  int *pLast;
  pLarge=a;
  pHand=a;
  pLast=a+6;
  for (int i = 0; i < 6; i++) {
    if (pLarge<pHand) {
      pLarge=pHand;
    }
    pHand++;
  }
  std::cout << *pLarge << '\n';

  return 0;
}
