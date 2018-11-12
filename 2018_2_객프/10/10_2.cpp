#include <iostream>

class Point {
private:
  double x;
  double y;
  static int countCreatedObjects;

public:
  Point ();
  Point (const int &x, const int &y);
  Point(const Point &point);
  ~Point();
  void setPoint(const int &x, const int &y);
  double getX() const;
  double getY() const;
  static int getCreatedObject(void);
  const Point operator+(const Point &point ) const;
  Point & operator=(const Point &point );
  friend std::ostream & operator<<(std::ostream &os, Point &point);
  friend class SpyPoint;
};
//Initialize static member data
int Point::countCreatedObjects=0;

Point::Point () : x(0),y(0){
  std::cout << "constructor Point() invoked..." << '\n';
  countCreatedObjects++;
}
Point::Point (const int &x, const int &y) : x(x),y(y){
  std::cout << "constructor Point(int,int) invoked..." << '\n';
  countCreatedObjects++;
}
Point::Point(const Point &point) : x(point.x),y(point.y){
  std::cout << "constructor Point(Point) invoked..." << '\n';
  countCreatedObjects++;
}
Point::~Point(){
  std::cout << "( " << this->x << ":" << this->y << ") destructor invoked..." << '\n';
  countCreatedObjects--;
}
void Point::setPoint(const int &x, const int &y) {
  this->x=x;
  this->y=y;
}
double Point::getX() const {
  return x;
}
double Point::getY() const {
  return y;
}
int Point::getCreatedObject() {
  return countCreatedObjects;
}


const Point Point::operator+(const Point &point ) const{
  Point result;
  result.x=this->x+point.x;
  result.y=this->y+point.y;
  return result;
}
Point & Point::operator=(const Point &point ) {
  this->x=point.x;
  this->y=point.y;
  return *this;
}


std::ostream & operator<<(std::ostream &os, Point &point){
  return os<<"pt = ( "<< point.x<<", "<<point.y<<" )";
}

class SpyPoint {
public:
  void printPoint(const Point & point);
};
void SpyPoint::printPoint(const Point & point) {
  std::cout << "pt = ( {X:"<< point.x<<"}, {Y:"<<point.y<<"} )" << '\n';
}



int main() {
  Point *p1,*p2;
  SpyPoint Sp;
  std::cout << "Number of created object is : " <<Point::getCreatedObject()<< '\n';
  p1=new Point;
  p2=new Point(1,2);
  p1->setPoint(10,20);
  *p2=*p1+*p2;
  std::cout << *p1 << '\n';
  std::cout << *p2 << '\n';
  std::cout << "Number of created object is : " <<Point::getCreatedObject()<< '\n';
  Sp.printPoint(*p1);
  Sp.printPoint(*p2);
  delete p1;
  delete p2;



  return 0;
}
