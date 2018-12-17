#include <iostream>
#include "Dice.hpp"
#include "Scissors.hpp"
#include "Rock.hpp"
#include "Paper.hpp"

int main() {
  PureBase * pObject;
  while (PureBase::getObjectCount()!=10) {
    switch (roll()) {
      case 0:
      pObject=new Scissors();
      break;
      case 1:
      pObject=new Rock();
      break;
      case 2:
      pObject=new Paper();
      break;
    }
    pObject->shoot();
  }


  return 0;
}
