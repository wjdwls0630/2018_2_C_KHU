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


  //유닛들 정보 확인
  m.printData();
  z.printData();
  b.printData();



  //동적 바인딩 확인
  U *p[3]={new M(3,5,1),new Z(2,2,0), new B(7,3,2)};
  std::cout << "유닛 총 개수 : " <<Unit::getCountUnit()<< '\n';

  for (auto elem : p) {
    elem->activateSpecialAbility();
  }
  for (auto elem : p) {
    elem->printData();
  }
  for (int i = 0; i < 3; i++) {
    delete p[i];
  }//iterator 로  진짜 데이터만 찾아 삭제

  //Marine 기능 확인

  attackUnit(&z, &m);
  attackUnit(&z, &m);
  attackUnit(&z, &m);
  attackUnit(&z, &m);
  m.activateSpecialAbility();
  m.printData();

  attackUnit(&z, &m);

  //저글링 기능 확인

  U*p1=new M(2,2,0);
  U*p2=new Z(1,2,0);
  attackUnit(p1, &z);
  p2->activateSpecialAbility();
  attackUnit(p1, p2);
  p1->activateSpecialAbility();
  attackUnit(p1, p2);
  p1->activateSpecialAbility();
  attackUnit(p1, &z);

  delete p1;


  //배틀크루져 기능 확인
  b.activateSpecialAbility();
  b.printData();







  return 0;
}

void attackUnit(U* attacker, U* defender){
  std::cout << attacker->getClassName() <<attacker->getNumber()<<"이 ";
  std::cout << defender->getClassName() <<defender->getNumber()<<"을 공격!"<<'\n'<<'\n';
  defender->setEnergy(defender->getEnergy()-attacker->getAttackPoint());
  std::cout << "공격 이후 defender 상태 확인" << '\n';
  if (defender->getEnergy()<=0) {
    defender->~U();
    attacker->changeSkilstatus();
  } else{
    defender->changeSkilstatus();
    std::cout << "defender : " << '\n';
    defender->printData();
    attacker->changeSkilstatus();

  }
}
