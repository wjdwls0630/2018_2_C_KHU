#ifndef Bus_hpp
#define Bus_hpp
#include <iostream>
#include "Transport.hpp"

class Bus : public Transport{
public:
  Bus (const int &dist);
  Bus (const int &start, const int &end);
  void print() override;
};
Bus::Bus (const int &dist):Transport(dist){
  this->setDistBase(10);
  this->setSpeed(0.3);
  this->setFare(1200, 100);
}
Bus::Bus (const int &start, const int &end):Transport(start,end){
  this->setDistBase(10);
  this->setSpeed(0.3);
  this->setFare(1200, 100);
}
void Bus::print(){
  std::cout << "=====================================" << '\n';
  std::cout << "Bus 이용요금 " << '\n';
  std::cout << "이동 거리 : " <<this->getDistance() <<"km"<<'\n';
  std::cout << "이동 시간 : " <<this->getTime() <<"분"<<'\n';
  std::cout << "총 요금 : " <<this->getTotalFare()<<"원" <<'\n';
  std::cout << "=====================================" << '\n';

}

#endif /* Bus_hpp */
