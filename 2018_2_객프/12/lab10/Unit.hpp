#ifndef Unit_hpp
#define Unit_hpp

// class Unit

//class Unit declaration
class Unit {
private:
  //class Unit Member data declaration(property)
  int pos[2];
  float attackPoint;
  float energy;
public:
  //class Unit Member Function declaraltion(method)

  //constructor declaration

  Unit();
  Unit(const int& x, const int& y, const float& attackPoint, const float& energy);

  //set Member data declaration
  void setPos(const int &x, const int &y);
  void setAttackPoint(const float &attackPoint);
  void setEnergy(const float &energy);

  //get Member data declaration
  int getPosX() const;
  int getPosY() const;
  float getAttackPoint() const;
  float getEnergy() const;
};

//class Unit Member function definition

//constructor definition
Unit::Unit():attackPoint(0.0),energy(0.0){
  this->pos[0]=0;
  this->pos[1]=0;
}

Unit::Unit(const int& x, const int& y, const float& attackPoint, const float& energy):attackPoint(attackPoint),energy(energy){
  this->pos[0]=x;
  this->pos[1]=y;
}

//set Member data definition
void Unit::setPos(const int &x, const int &y){
  this->pos[0]=x;
  this->pos[1]=x;
}
void Unit::setAttackPoint(const float &attackPoint){
  this->attackPoint=attackPoint;
}
void Unit::setEnergy(const float &energy){
  this->energy=energy;
}

//get Member data definition
int Unit::getPosX() const{ return this->pos[0]; }
int Unit::getPosY() const{ return this->pos[1]; }
float Unit::getAttackPoint() const{ return this->attackPoint; }
float Unit::getEnergy() const{ return this->energy; }



#endif /* Unit_hpp */
