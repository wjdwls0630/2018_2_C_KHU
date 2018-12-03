#include <iostream>
#include <cmath>
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



int main() {
  Polygon pol;
  Rectangle rec(4,10);
  cout << "--- Polygon class ---" << endl;
  pol.calcGirth();
  pol.calcArea();
  cout << "--- Rectangle class ---" << endl;
  rec.calcGirth();
  rec.calcArea();
  return 0;
}
