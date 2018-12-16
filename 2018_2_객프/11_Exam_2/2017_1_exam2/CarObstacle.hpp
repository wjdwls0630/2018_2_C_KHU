#ifndef CarObstacle_hpp
#define CarObstacle_hpp

class CarObstacle : public Obstacle {
private:
  bool move;
  int velocity;
public:
  CarObstacle (const int &id,const int &velocity, const float &size,const float &deg, const float &distance);
  float calculateThreat() override;
  int getVelocity() const;
  void print() override;
};
CarObstacle::CarObstacle (const int &id,const int &velocity, const float &size,const float &deg, const float &distance) :
Obstacle(id,size,deg,distance),velocity(velocity){
  if (velocity==0) {
    move=false;
  }else{
    move=true;
  }
  this->calculateThreat();
}
float CarObstacle::calculateThreat() {
  if (move) {
    Obstacle::setThreat(Obstacle::calculateThreat()*this->velocity);
  }else{
    Obstacle::calculateThreat();
  }
  return Obstacle::getThreat();
}
int CarObstacle::getVelocity() const{ return this->velocity;}
void CarObstacle::print() {
  std::cout.width(10);
  std::cout << "장애물의 종류 : " <<"car"<<'\n';
  std::cout.width(10);
  if (this->move) {
    std::cout << "차의 속도(km/h) : " <<this->getVelocity()<<'\n';
  }else{
    std::cout << "차는 정지해있습니다" << '\n';
  }
  Obstacle::print();
}
#endif /* CarObstacle_hpp */
