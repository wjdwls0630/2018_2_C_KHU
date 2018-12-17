#ifndef UnmannedCar_hpp
#define UnmannedCar_hpp
#include "Error2.hpp"
class UnmannedCar {
private:
  float HandleDeg;
  int velocity;
public:
  UnmannedCar ();
  void setHandleDeg();
  void avoidObstacle(Obstacle *ObstacleList,const int &NumberOfObstacle);
  void print();
};
UnmannedCar::UnmannedCar (): HandleDeg(0),velocity(30){}
void UnmannedCar::setHandleDeg() {
  if (this->HandleDeg>=90&&this->HandleDeg<=270) {
    throw InDanger();
  } else if(this->HandleDeg<0){
    this->HandleDeg=360+this->HandleDeg;
  } else if(this->HandleDeg==360){
    this->HandleDeg=0;
  }
}
void UnmannedCar::avoidObstacle(Obstacle *ObstacleList,const int &NumberOfObstacle){
  Obstacle * maxThreat=pickMaximumThreat(ObstacleList, NumberOfObstacle);
  std::cout << "가장 위험한 장애물은 " << '\n';
  maxThreat->print();
  for (int i=0; i<NumberOfObstacle; i++) {
    ObstacleList[i].print();
    if ((ObstacleList[i].getDegree()<5||ObstacleList[i].getDegree()>355)&&ObstacleList[i].getDistance()<=10) {
      this->velocity=0;
      std::cout << "차의 속도를 0으로 합니다. 운행을 정지합니다." << '\n';
      break;
    }else{
      if (ObstacleList[i].getDegree()>=180&&ObstacleList[i].getDegree()<360) {
        if (this->velocity<=50) {
          this->HandleDeg+=10;
          std::cout << "차의 핸들을 오른쪽으로 10도 꺾습니다" << '\n';
        } else {
          this->HandleDeg+=20;
          std::cout << "차의 핸들을 오른쪽으로 20도 꺾습니다" << '\n';
        }
      } else {
        if (this->velocity<=50) {
          this->HandleDeg-=10;
          std::cout << "차의 핸들을 왼쪽으로 10도 꺾습니다" << '\n';
        } else {
          this->HandleDeg-=20;
          std::cout << "차의 핸들을 왼쪽으로 20도 꺾습니다" << '\n';
        }
      }
      this->setHandleDeg();
    }
    std::cout << "장애물을 회피 한 후 차의 상태는 " << '\n';
    this->print();
  }
  std::cout << "운행 종료 ..." << '\n';
}

void UnmannedCar::print(){
  std::cout << "현재 자동차의 핸들 방위 : " << this->HandleDeg <<'\n';
  std::cout << "헌재 자동차의 속도 : " <<this->velocity <<'\n';
}
#endif /* UnmannedCar_hpp */
