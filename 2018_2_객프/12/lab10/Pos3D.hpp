#ifndef Pos3D_hpp
#define Pos3D_hpp
#include "Pos2D.hpp"

// class Pos3D

//class Pos3D declaration
class Pos3D : public Pos2D {
private:
  //class Pos3D Member data declaration(property)
  int z;
  std::string location[3];
  std::string user_location;

public:
  //class Pos3D Member Function declaraltion(method)

  //constructor declaration
  Pos3D (const int &x=0, const int &y=0, const int &z=0);

  //get Member data declaration
  std::string getZ() const;


  //set Member data declaration
  void setZ(const int &z);


};
//constructor declaration
Pos3D::Pos3D (const int &x, const int &y, const int &z):Pos2D(x,y){
  location[0]="Ground";
  location[1]="Hill";
  location[2]="Air";
  this->user_location=location[z];
}

//get Member data definition
std::string Pos3D::getZ() const{ return user_location;}


//set Member data definition
void Pos3D::setZ(const int &z) { this->user_location=location[z]; }


#endif /* Pos3D_hpp */
