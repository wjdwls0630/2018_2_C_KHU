#ifndef Unit_hpp
#define Unit_hpp
#include "Pos3D.hpp"

typedef Pos3D P3;
// class Unit

//class Unit declaration
class Unit {
private:
  //class Unit Member data declaration(property)
  P3 pos;
  float attackPoint;
  float energy;
  static int countUnit;
  int number;

public:
  //class Unit Member Function declaraltion(method)

  //constructor declaration

  Unit();
  Unit(const int& x, const int& y, const int &z,const float& attackPoint, const float& energy);

  //destructor declaration
  virtual ~Unit();

  //set Member data declaration
  void setPos(const int &x, const int &y,const int &z);
  void setAttackPoint(const float &attackPoint);
  virtual void setEnergy(const float &energy);
  void setNumber(const int &countUnit);

  //get Member data declaration
  int getPosX() const;
  int getPosY() const;
  std::string getPosZ() const;
  virtual float getAttackPoint() const;
  float getEnergy() const;
  int getNumber() const;

  //print Member data definition
  virtual void printData() const;

  //get class name declaration(pure virtual function)
  virtual const std::string getClassName() const =0;


  //get countUnit declaration
  static int getCountUnit() ;

  //activate Special skill declaration(pure virtual function)
  virtual void activateSpecialAbility() =0;

};
//Initiallize Static member data(countUnit);
int Unit::countUnit=0;

//get countUnit definition
int Unit::getCountUnit() { return countUnit; }

//class Unit Member function definition

//constructor definition
Unit::Unit():attackPoint(0.0),energy(0.0){
  countUnit++;
  this->pos.setX(0);
  this->pos.setY(0);
  this->pos.setZ(0);
  std::cout << "생성 유닛 이름 : ";
}

Unit::Unit(const int& x, const int& y, const int &z,const float& attackPoint, const float& energy)
:attackPoint(attackPoint),energy(energy){
  countUnit++;
  this->pos.setX(x);
  this->pos.setY(y);
  this->pos.setZ(z);
  std::cout << "생성 유닛 이름 : ";
}

//destructor definition
Unit::~Unit(){
  countUnit--;
  std::cout << " 파괴" << '\n';
}

//set Member data definition
void Unit::setPos(const int &x, const int &y,const int &z){
  this->pos.setX(x);
  this->pos.setY(y);
  this->pos.setZ(z);
}
void Unit::setAttackPoint(const float &attackPoint){ this->attackPoint=attackPoint; }
void Unit::setEnergy(const float &energy){ this->energy=energy; }
void Unit::setNumber(const int &countUnit){ this->number=countUnit; }

//get Member data definition
int Unit::getPosX() const{ return this->pos.getX(); }
int Unit::getPosY() const{ return this->pos.getY(); }
std::string Unit::getPosZ() const{ return this->pos.getZ(); }
float Unit::getAttackPoint() const{ return this->attackPoint; }
float Unit::getEnergy() const{ return this->energy; }
int Unit::getNumber() const{ return this->number; }

//print Member data definition
void Unit::printData() const{
  std::cout << "위치  " << '\n';
  std::cout << "> x : " <<this->pos.getX()<<", y : "<<this->pos.getY()<<", z : "<<this->pos.getZ()<< '\n';
  std::cout << "공격력" <<'\n';
  std::cout << "> " <<this->getAttackPoint()<<'\n';
  std::cout << "에너지" <<'\n';
  std::cout << "> " <<this->getEnergy()<<'\n';
}



#endif /* Unit_hpp */
