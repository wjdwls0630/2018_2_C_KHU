#ifndef BattleCruiser_hpp
#define BattleCruiser_hpp
#include "Unit.hpp"

// class BattleCruiser

//class BattleCruiser declaration
class BattleCruiser : public Unit {
private:
  //class BattleCruiser Member data declaration(property)
  static int countBattleCruiser;
  int numberOfYamato;
  bool isYamato;

public:
  //class BattleCruiser Member Function declaraltion(method)

  //constructor declaration
  BattleCruiser();
  BattleCruiser(const int &x, const int &y, const int &z);

  //destructor declaration
  virtual ~BattleCruiser();

  //print Member data declaration
  void printData() const override;

  //get class name declaration
  const std::string getClassName() const override;

  //get countBattleCruiser declaration
  static int getCountBattleCruiser() ;

  //activate Special skill declaration
  void activateSpecialAbility() override;

  //getAttackPoint override declaration
  float getAttackPoint() const override;

};

//Initiallize Static member data(countBattleCruiser);
int BattleCruiser::countBattleCruiser=0;

//get countBattleCruiser definition
int BattleCruiser::getCountBattleCruiser() { return countBattleCruiser; }

//class BattleCruiser Member function definition

//constructor definition
BattleCruiser::BattleCruiser()
:Unit(),isYamato(false),numberOfYamato(0){
  countBattleCruiser++;
  this->setAttackPoint(82.4);
  this->setEnergy(250.0);
  this->setNumber(countBattleCruiser);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}
BattleCruiser::BattleCruiser(const int &x, const int &y, const int &z)
:Unit(x,y,z,82.4,250.0),isYamato(false),numberOfYamato(0){
  countBattleCruiser++;
  this->setNumber(countBattleCruiser);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}

//destructor definition
BattleCruiser::~BattleCruiser(){
  std::cout << this->getClassName() <<this->getNumber();
  countBattleCruiser--;
}

//print Member data definition
void BattleCruiser::printData() const {
  std::cout << "======"<<this->getClassName()<<this->getNumber()<<"======" << '\n';
  this->Unit::printData();
  std::cout << "=========================" << '\n';
  std::cout  << '\n';
}

//get class name declaration
const std::string BattleCruiser::getClassName() const { return "BattleCruiser"; }

//activate Special skill definition
void BattleCruiser::activateSpecialAbility(){
  if (isYamato==false) {
    isYamato=true;
    numberOfYamato=3;
    this->setAttackPoint(getAttackPoint());
    std::cout << "Yamato is activated" << '\n';
  }else{
    if (numberOfYamato==0) {
      isYamato=false;
      this->setAttackPoint(getAttackPoint());
      std::cout << "Yamato is deactivated" << '\n';
    } else{

    }

  }
}


//getAttackPoint override definition
float BattleCruiser::getAttackPoint() const {
  if (isYamato==false) {
    return Unit::getAttackPoint();
  } else{
    return 300.0;
  }
}


#endif /* BattleCruiser_hpp */
