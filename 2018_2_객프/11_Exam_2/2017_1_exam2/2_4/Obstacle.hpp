#ifndef Obstacle_hpp
#define Obstacle_hpp
#include <iostream>
#include "Error2.hpp"


class Obstacle {
private:
  int Id;
  float Size;
  float Deg;
  float Distance;
  float Threat;
public:
  Obstacle(const int &id, const float &size,const float &deg, const float &distance);
  void setDeg();
  float getThreat() const;
  float getDegree() const;
  float getDistance() const;
  void setThreat(float threat);
  virtual float calculateThreat();
  virtual void print();
  friend Obstacle* pickMaximumThreat(Obstacle *ObstacleList,int NumberOfObstacle);
};
Obstacle::Obstacle(const int &id, const float &size,const float &deg, const float &distance):
Id(id),Size(size),Distance(distance),Deg(deg),Threat(this->calculateThreat()){ this->setDeg(); }
void Obstacle::setDeg(){
  if (this->Deg>360||this->Deg<-360) {
    throw OutOfDegree();
  } else if(this->Deg<0){
    this->Deg=360+this->Deg;
  } else if(this->Deg==360){
    this->Deg=0;
  }
}
void Obstacle::setThreat(float threat){ this->Threat=threat;}
float Obstacle::getThreat() const{ return this->Threat; }
float Obstacle::getDegree() const{ return this->Deg; }
float Obstacle::getDistance() const{ return this->Distance; }
float Obstacle::calculateThreat(){
  if (this->Deg<45||this->Deg>315) {
    this->Threat=(this->Size/this->Distance);
  } else{
    this->Threat=(this->Size/this->Distance)/10;
  }
  return this->Threat;
}
void Obstacle::print(){
  std::cout<< '\n';
  std::cout.width(10);
  std::cout << "장애물 ID : " <<this->Id <<'\n';
  std::cout.width(10);
  std::cout << "장애물 크기 : " <<this->Size <<'\n';
  std::cout.width(10);
  std::cout << "장애물 상대 방위(deg) : " <<this->Deg <<'\n';
  std::cout.width(10);
  std::cout << "장애물과의 거리(m) : " <<this->Distance <<'\n';
  std::cout.width(10);
  std::cout << "장애물에 대한 위험도(%) : " <<this->Threat<<'\n';
  std::cout<< '\n';
}
Obstacle* pickMaximumThreat(Obstacle *ObstacleList,int NumberOfObstacle){
  float target=0;
  int target_index;
  for (int i = 0; i <NumberOfObstacle; i++) {
    if (ObstacleList[i].getThreat()>target) {
      target=ObstacleList[i].getThreat();
      target_index=i;
    }
  }
  return &ObstacleList[target_index];

}
#endif /* Obstacle_hpp */
