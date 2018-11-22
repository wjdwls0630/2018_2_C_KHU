#ifndef Marine_hpp
#define Marine_hpp
#include "Unit.hpp"

// class Marine

//class Marine declaration
class Marine : public Unit {
private:
  //class Marine Member data declaration(property)

public:
  //class Marine Member Function declaraltion(method)

  //constructor declaration
  Marine();
  Marine(const int &x, const int &y);

};

//class Marine Member function definition

//constructor definition
Marine::Marine():Unit(){
  this->setAttackPoint(32.1);
  this->setEnergy(104.0);
}
Marine::Marine(const int &x, const int &y):Unit(x,y,32.1,104.0){}


#endif /* Unit_hpp */
