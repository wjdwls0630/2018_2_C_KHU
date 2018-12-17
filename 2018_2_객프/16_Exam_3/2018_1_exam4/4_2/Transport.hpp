#ifndef Transport_hpp
#define Transport_hpp
#include <cmath>
class Transport {
private:
  int dist;//이동거리
  float speed;//속력
  int distbase;//기본요금거리
  int farebase;//기본요금
  int fareperdist;//거리에 따른 추가요금

public:
  Transport (const int &dist);
  Transport (const int &start, const int &end);
  virtual ~Transport(){};
  void setDistBase(const int & distbase);
  void setSpeed(const float & speed);
  void setFare(const int& farebase, const int& fareperdist);
  int getDistance() const;
  int getTotalFare() const;
  int getTime() const;
  virtual void print()=0;
};
Transport::Transport (const int &dist):dist(dist){}
Transport::Transport (const int &start, const int &end){
  this->dist=end-start;
}
void Transport::setDistBase(const int & distbase){ this->distbase=distbase; }
void Transport::setSpeed(const float & speed){ this->speed=speed; }
void Transport::setFare(const int& farebase, const int& fareperdist){ this->farebase=farebase; this->fareperdist=fareperdist; }
int Transport::getDistance() const{ return this->dist; }
int Transport::getTotalFare() const{
  if (this->distbase>this->dist) {
    return this->farebase;
  } else{
    return this->farebase+(this->dist-this->distbase)*this->fareperdist;
  }
}
int Transport::getTime() const{ return ceil(this->dist/this->speed); }
#endif /* Transport_hpp */
