#include <iostream>
#include "Marine.hpp"
#include "Zergling.hpp"
#include "BattleCruiser.hpp"

typedef Marine M;
typedef Zergling Z;
typedef BattleCruiser B;
typedef Unit U;

void attackUnit(U* atk, U* def);
int main() {
  M m(1,1,1);
  Z z(3,4,0);
  B b(5,6,2);
  U *a;
  std::cout << "유닛 총 개수 : " <<Unit::getCountUnit()<< '\n';

  m.printData();
  z.printData();
  b.printData();


  U *p[3]={new M(3,5,1),new Z(2,2,0), new B(7,3,2)};

  for (auto elem : p) {
    elem->activateSpecialAbility();
  }
  for (auto elem : p) {
    elem->printData();
  }
  for (int i = 0; i < 3; i++) {
    delete p[i];
  }//iterator 로  진짜 데이터만 찾아 삭제

  

  attackUnit(&m, &b);






  return 0;
}

void attackUnit(U* attacker, U* defender){
  std::cout << attacker->getClassName() <<attacker->getNumber()<<"이 ";
  std::cout << defender->getClassName() <<defender->getNumber()<<"을 공격!"<<'\n'<<'\n';
  defender->setEnergy(defender->getEnergy()-attacker->getAttackPoint());
  std::cout << "공격 이후 상태 확인" << '\n';
  if (defender->getEnergy()<=0) {
    std::cout << "defender : " << '\n';
    defender->~U();
    std::cout << "attacker : " << '\n';
    attacker->printData();
  } else{
    std::cout << "defender : " << '\n';
    defender->printData();
    std::cout << "attacker : " << '\n';
    attacker->printData();
  }
}
