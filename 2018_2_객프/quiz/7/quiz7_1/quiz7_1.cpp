#include <iostream>

class Shape {
private:
  int width;
  int height;
public:
  Shape (){}
  void setValue(int w, int h) {
    this->width=w;
    this->height=h;
  }
  int getWidth() const{ return this->width ;}
  int getHeight() const{ return this-> height; }
  virtual int area() = 0;
};
class Rectangle : public Shape {
public:
  Rectangle (){}
  int area() override {return this->getWidth()*this->getHeight();}
};
class RTriangle : public Shape {
public:
  RTriangle (){}
  int area() override {return this->getWidth()*this->getHeight()*0.5;}
};

void printArea(Shape * a) {
  std::cout <<"Area : "<< a->area() << '\n';

}
int main() {
  Shape *a;
  Shape *b;
  Rectangle Rect;
  RTriangle Rtri;
  Rect.setValue(3, 4);
  Rtri.setValue(3, 4);
  a=&Rect;
  b=&Rtri;
  printArea(a);
  printArea(b);


  return 0;
}
