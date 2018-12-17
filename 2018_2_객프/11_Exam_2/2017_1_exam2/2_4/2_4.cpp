#include <iostream>
#include "Obstacle.hpp"
#include "ObjectObstacle.hpp"
#include "PedestrianObstacle.hpp"
#include "CarObstacle.hpp"
#include "UnmannedCar.hpp"
using OB=Obstacle;
using ObOB=ObjectObstacle;
using POB=PedestrianObstacle;
using COB=CarObstacle;
using UC=UnmannedCar;
int main() {
  try{
    OB *arr[5]={new OB(0,1.0,-30.0,10.0),new OB(1,3.0,60.0,5.0),new ObOB(2,1,2.0,30.0,5.0),new POB(3,1.5,-30.0,5.0),new COB(4,30,2,75.0,5.0)};
    for (OB* elem : arr) {
      elem->print();
    }
    std::cout << "가장 위험한 장애물" << '\n';
    OB* threat=pickMaximumThreat(*arr, 5);
    threat->print();


    std::cout << "\n자율 주행 자동차 시작...." << '\n';
    UC prototype;
    prototype.avoidObstacle(*arr,5);
  } catch(std::exception &ex){
    std::cout << ex.what() << '\n';
  }

  return 0;
}
