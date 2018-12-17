#ifndef PedestrianObstacle_hpp
#define PedestrianObstacle_hpp

class PedestrianObstacle : public Obstacle {
private:
  bool inDriver;
public:
  PedestrianObstacle (const int &id, const float &size,const float &deg, const float &distance);
  float calculateThreat() override;
  std::string getStrInDriver() const;
  void print() override;
};
PedestrianObstacle::PedestrianObstacle (const int &id,const float &size,const float &deg, const float &distance) :
Obstacle(id,size,deg,distance){
  if (Obstacle::getDegree()<45||Obstacle::getDegree()>315) {
    this->inDriver=true;
  }else{
    this->inDriver=false;
  }
  this->calculateThreat();
}
float PedestrianObstacle::calculateThreat() {
  if (this->inDriver) {
    Obstacle::setThreat(Obstacle::getThreat()/2);
  }else{
    Obstacle::setThreat(Obstacle::getThreat()*4);
  }
  return Obstacle::getThreat();
}
std::string PedestrianObstacle::getStrInDriver() const{
  std::string inD;
  if (this->inDriver) {
    inD="True";
  } else{
    inD="False";
  }
  return inD;
}
void PedestrianObstacle::print() {
  std::cout.width(10);
  std::cout << "장애물의 종류 : " <<"person"<<'\n';
  std::cout.width(10);
  std::cout << "운전자의 시야 안에 있음 : " <<this->getStrInDriver()<<'\n';
  Obstacle::print();
}
#endif /* PedestrianObstacle_hpp */
