#ifndef Marine_hpp
#define Marine_hpp
#include "Unit.hpp"

// class Marine

//class Marine declaration
class Marine : public Unit {
private:
  //class Marine Member data declaration(property)
  static int countMarine;
  bool isSteamPacked;

public:
  //class Marine Member Function declaraltion(method)

  //constructor declaration
  Marine();
  Marine(const int &x, const int &y, const int &z);

  //destructor declaration
  virtual ~Marine();

  //print Member data declaration
  void printData() const override;

  //get class name declaration
  const std::string getClassName() const override;




  //get countMarine declaration
  static int getCountMarine() ;

  //activate Special skill declaration
  void activateSpecialAbility() override;

  //getAttackPoint override declaration
  float getAttackPoint() const override;

};

//Initiallize Static member data(countMarine);
int Marine::countMarine=0;

//get countMarine definition
int Marine::getCountMarine() { return countMarine; }

//class Marine Member function definition

//constructor definition
Marine::Marine():Unit(),isSteamPacked(false){
  countMarine++;
  this->setAttackPoint(32.1);
  this->setEnergy(104.0);
  this->setNumber(countMarine);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}
Marine::Marine(const int &x, const int &y, const int &z):Unit(x,y,z,32.1,104.0),isSteamPacked(false){
  countMarine++;
  this->setNumber(countMarine);
  std::cout << this->getClassName() <<this->getNumber() <<'\n';
}

//destructor definition
Marine::~Marine(){
  std::cout << this->getClassName() <<this->getNumber();
  countMarine--;
}

//print Member data definition
void Marine::printData() const {
  std::cout << "=========="<<this->getClassName()<<this->getNumber()<<"=========" << '\n';
  this->Unit::printData();
  std::cout << "=========================" << '\n';
  std::cout  << '\n';
}

//get class name declaration
const std::string Marine::getClassName() const { return "Marine"; }




//activate Special skill definition
void Marine::activateSpecialAbility(){
  if (isSteamPacked==false) {
    if (this->getEnergy()-20<=0) {
      std::cout << "Energy is too low to activate." << '\n';
      std::cout << "SteamPack can't be activated" << '\n';
    } else{
      this->setAttackPoint(this->getAttackPoint());
      this->setEnergy(this->getEnergy()-20.0);
      std::cout << "SteamPack is activated" << '\n';
      isSteamPacked=true;
    }
  }else{
    this->setAttackPoint(32.1);
    std::cout << "SteamPack is deactivated" << '\n';
  }
}

//getAttackPoint override definition
float Marine::getAttackPoint() const {
  if (isSteamPacked==false) {
    return Unit::getAttackPoint();
  } else{
    return Unit::getAttackPoint()*1.5;
  }
}

#endif /* Marine_hpp */
