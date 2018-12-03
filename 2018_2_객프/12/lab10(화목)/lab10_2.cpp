#include <iostream>
#include <cmath>
#include <iomanip>
const double PI = 3.14159;
using namespace std;
class Polygon {
public:
  Polygon();
  Polygon(int point, float length);
  ~Polygon(){};
  virtual void calcGirth();
  virtual void calcArea();
protected:
  int mPoint; // 꼭지점 갯수
  double mLength; // 한 변의 길이
};
Polygon::Polygon():mPoint(0),mLength(0){}
Polygon::Polygon(int point, float length):mPoint(point),mLength(length){}
void Polygon::calcGirth(){
  std::cout << "Girth : " ;
  std::cout << "empty" << '\n';
}
void Polygon::calcArea(){
  std::cout << "Area : " ;
  std::cout << "empty" << '\n';
}
class Rectangle : public Polygon{
public :
  Rectangle();
  Rectangle(int point, float length);
  ~Rectangle() {};
  void calcGirth() override;
  void calcArea() override;
};
Rectangle::Rectangle():Polygon(4,0){}
Rectangle::Rectangle(int point, float length): Polygon(point, length){}
void Rectangle::calcGirth(){
  std::cout << "Girth : " ;
  std::cout << 4*this->mLength << '\n';
}
void Rectangle::calcArea(){
  std::cout << "Area : " ;
  std::cout << pow(this->mLength,2) << '\n';
}

class Triangle : public Polygon{
public :
  Triangle();
  Triangle(int point, float length);
  ~Triangle() {};
  void calcGirth() override;
  void calcArea() override;
};
Triangle::Triangle():Polygon(3,0){}
Triangle::Triangle(int point, float length): Polygon(point, length){}
void Triangle::calcGirth(){
  std::cout << "Girth : " ;
  std::cout << 3*this->mLength << '\n';
}
void Triangle::calcArea(){
  std::cout << "Area : " ;
  std::cout  <<(sqrt(3)/4)*pow(this->mLength,2) << '\n';
}

class Circle : public Polygon{
public :
  Circle();
  Circle(int point, float length);
  ~Circle() {};
  void calcGirth() override;
  void calcArea() override;
};
Circle::Circle():Polygon(0,0){}
Circle::Circle(int point, float length): Polygon(point, length){}
void Circle::calcGirth(){
  double girth= 2*PI*this->mLength;
  std::cout << "Girth : " ;
  cout.setf(ios::fixed);
  cout.precision(1);
  std::cout << girth << '\n';
  cout.unsetf(ios::fixed);
}
void Circle::calcArea(){
  double area=PI*pow(this->mLength,2);
  std::cout << "Area : " ;
  cout.setf(ios::fixed);
  cout.precision(1);
  std::cout << area << '\n';
  cout.unsetf(ios::fixed);
}



int main() {
  Triangle tri(3, 10);
  Rectangle rec(4, 10);
  Circle cir(0, 5);
  cout << "--- Triangle class ---" << endl;
  tri.calcGirth();
  tri.calcArea();
  cout << "--- Rectangle class ---" << endl;
  rec.calcGirth();
  rec.calcArea();
  cout << "--- Circle class ---" << endl;
  cir.calcGirth();
  cir.calcArea();
}
