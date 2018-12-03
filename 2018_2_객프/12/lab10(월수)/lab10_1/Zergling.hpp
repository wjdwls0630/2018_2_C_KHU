#ifndef Zergling_hpp
#define Zergling_hpp
#include "Unit.hpp"

// class Zergling

//class Zergling declaration
class Zergling : public Unit {
private:
  //class Zergling Member data declaration(property)
  static int countZergling;
  int numberOfDefenceUp;


public:
  //class Zergling Member Function declaraltion(method)

  //constructor declaration
  Zergling();
  Zergling(const int &x, const int &y, const int &z);

  //destructor declaration
  virtual ~Zergling();

  //print Member data declaration
  void printData() const override;

  //get class name declaration
  const std::string getClassName() const override;

  //get countZergling declaration
  static int getCountZergling() ;

  //activate Special skill declaration
  void activateSpecialAbility() override;

  //setEnergy override declaration
  void setEnergy(const float &remainEnergy) override;

  //changeSkilstatus definition
  void changeSkilstatus() override;

};

//Initiallize Static member data(countZergling);
int Zergling::countZergling=0;

//get countZergling definition
int Zergling::getCountZergling() { return countZergling; }

//class Zergling Member function definition

//constructor definition
Zergling::Zergling()
:Unit(),numberOfDefenceUp(0){
  countZergling++;
  this->setAttackPoint(21.5);
  this->setEnergy(50.0);
  this->setNumber(countZergling);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}
Zergling::Zergling(const int &x, const int &y, const int &z)
:Unit(x,y,z,21.5,50.0),numberOfDefenceUp(0){
  countZergling++;
  this->setNumber(countZergling);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}

//destructor definition
Zergling::~Zergling(){
  std::cout << this->getClassName() <<this->getNumber();
  countZergling--;
}

//print Member data definition
void Zergling::printData() const {
  std::cout << "========="<<this->getClassName()<<this->getNumber()<<"========" << '\n';
  this->Unit::printData();
  std::cout << "=========================" << '\n';
  std::cout  << '\n';
}

//get class name declaration
const std::string Zergling::getClassName() const { return "Zergling"; }

//activate Special skill definition
void Zergling::activateSpecialAbility(){
  if (this->numberOfDefenceUp==0) {
    this->numberOfDefenceUp=3;
    std::cout << this->getClassName() <<this->getNumber() <<" ";
    std::cout << "DefenceUp is activated" << '\n';
  }
}

//setEnergy override definition
void Zergling::setEnergy(const float &remainEnergy){
  float attackPoint=Unit::getEnergy()-remainEnergy;
  if (this->numberOfDefenceUp==0) {
    Unit::setEnergy(Unit::getEnergy()-attackPoint);
  } else{
    Unit::setEnergy(Unit::getEnergy()-(attackPoint/2));
  }
}

//changeSkilstatus definition
void Zergling::changeSkilstatus(){
  if (this->numberOfDefenceUp!=0) {
    this->numberOfDefenceUp--;
    if (this->numberOfDefenceUp==0) {
      std::cout << this->getClassName() <<this->getNumber() <<" ";
      std::cout << "DefenceUp is deactivated" << '\n';
    }else{
      std::cout << this->getClassName() <<this->getNumber() <<" ";
      std::cout <<this->numberOfDefenceUp <<" DefenceUp left" << '\n';
    }
  }
}



#endif /* Zergling_hpp */
