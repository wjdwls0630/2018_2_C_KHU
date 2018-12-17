#ifndef Taxi_hpp
#define Taxi_hpp
#include <iostream>
#include "Transport.hpp"
class Taxi : public Transport{
public:
  Taxi (const int &dist);
  Taxi (const int &start, const int &end);
  void print() override;
};
Taxi::Taxi (const int &dist):Transport(dist){
  this->setDistBase(2);
  this->setSpeed(0.7);
  this->setFare(3000, 300);
}
Taxi::Taxi (const int &start, const int &end):Transport(start,end){
  this->setDistBase(2);
  this->setSpeed(0.7);
  this->setFare(3000, 300);
}
void Taxi::print(){
  std::cout << "=====================================" << '\n';
  std::cout << "Taxi 이용요금 " << '\n';
  std::cout << "이동 거리 : " <<this->getDistance() <<"km"<<'\n';
  std::cout << "이동 시간 : " <<this->getTime() <<"분"<<'\n';
  std::cout << "총 요금 : " <<this->getTotalFare()<<"원" <<'\n';
  std::cout << "=====================================" << '\n';
}
#endif /* Taxi_hpp */
