#ifndef Pos2D_hpp
#define Pos2D_hpp

// class Pos2D

//class Pos2D declaration
class Pos2D {
private:
  //class Pos2D Member data declaration(property)
  int x;
  int y;

public:
  //class Pos2D Member Function declaraltion(method)

  //constructor declaration
  Pos2D (const int &x = 0, const int &y =0);

  //get Member data declaration
  int getX() const;
  int getY() const;

  //set Member data declaration
  void setX(const int &x);
  void setY(const int &y);

};
//constructor declaration
Pos2D::Pos2D (const int &x, const int &y):x(x),y(y){}

//get Member data definition
int Pos2D::getX() const{ return x;}
int Pos2D::getY() const{ return y;}

//set Member data definition
void Pos2D::setX(const int &x) { this->x=x; }
void Pos2D::setY(const int &y) { this->y=y; }

#endif /* Pos2D_hpp */
