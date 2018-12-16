#ifndef ObjectObstacle_hpp
#define ObjectObstacle_hpp
#include "Obstacle.hpp"

class ObjectObstacle : public Obstacle {
private:
  enum ObjectName { colonnade,streetlamp,handrail,sign };
  int oName;
public:
  ObjectObstacle (const int &id,const int &oName, const float &size,const float &deg, const float &distance);
  float calculateThreat() override;
  std::string getObjectName() const;
  void print() override;
};
ObjectObstacle::ObjectObstacle (const int &id,const int &oName, const float &size,const float &deg, const float &distance) :
Obstacle(id,size,deg,distance),oName(oName){this->calculateThreat();}
float ObjectObstacle::calculateThreat() {
  if (this->oName==colonnade||this->oName==streetlamp) {
    Obstacle::setThreat(Obstacle::calculateThreat()*2);
  }else{
    Obstacle::calculateThreat();
  }
  return Obstacle::getThreat();
}
std::string ObjectObstacle::getObjectName() const{
  std::string name;
  switch (this->oName) {
    case 0:
    name= "colonnade";
    break;
    case 1:
    name= "streetlamp";
    break;
    case 2:
    name= "handrail";
    break;
    case 3:
    name= "sign";
    break;
  }
  return name;
}
void ObjectObstacle::print() {
  std::cout.width(10);
  std::cout << "장애물의 종류 : " <<this->getObjectName()<<'\n';
  Obstacle::print();
}
#endif /* ObjectObstacle_hpp */
