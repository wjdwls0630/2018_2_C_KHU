#include <iostream>
#include <vector>
const double PI=3.14159;
class Polygon {
private:
  int mPoint;
  std::vector<int> mLenList;
public:
  Polygon ():mPoint(0){this->mLenList.resize(0);}
  virtual int getRound() const{
    int Round=0;
    for (int i = 0; i < this->mLenList.size(); i++) {
      Round+=this->mLenList[i];
    }
    return Round;
  }
  virtual double getArea() const = 0;
  virtual void print() {
    std::cout << "변의 길이 : " ;
    for (int i = 0; i < this->mLenList.size(); i++) {
      std::cout << this->mLenList[i] << ' ';
    }
    std::cout  << '\n';
    std::cout << "둘레 : " <<this->getRound()<< '\n';
  }
  int getmLenList(int index) const{
    return this->mLenList[index];
  }
  void addmLenList(const int &a) {
    this->mLenList.push_back(a);
  }
  int getmPoint() const {
    return this->mPoint;
  }
  void setmPoint(const int &a) {
    this->mPoint=a;
  }
};

class Ellipse : public Polygon  {
public:
  Ellipse (const int &a, const int &b){
    this->setmPoint(0);
    this->addmLenList(a);
    this->addmLenList(b);
  };
  int getRound() const override{
    int a, b;
    if (this->getmLenList(0)>this->getmLenList(1)) {
      a=this->getmLenList(0);
      b=this->getmLenList(1);
    } else if(this->getmLenList(0)<this->getmLenList(1)){
      a=this->getmLenList(1);
      b=this->getmLenList(0);
    }
    return PI*((5*(a+b)/4)-(a*b/(a+b)));
  }
  double getArea() const override{
    int a, b;
    if (this->getmLenList(0)>this->getmLenList(1)) {
      a=this->getmLenList(0);
      b=this->getmLenList(1);
    } else if(this->getmLenList(0)<this->getmLenList(1)){
      a=this->getmLenList(1);
      b=this->getmLenList(0);
    }
    return PI*a*b;
  }
  void print() override{
    std::cout << "변의 길이 : " ;
    for (int i = 0; i < 2; i++) {
      std::cout << this->getmLenList(i) << ' ';
    }
    std::cout  << '\n';
    std::cout << "둘레 : " <<this->getRound()<< '\n';
    std::cout << "넓이 : " <<this->getArea()<< '\n';
  }
};
class RegularHexagon : public Polygon {

public:
  RegularHexagon (const int &a){
    this->setmPoint(6);
    this->addmLenList(a);
  }
  int getRound() const override{
    return this->getmLenList(0)*6;
  }
  double getArea() const override{
    return 2.59808*this->getmLenList(0)*this->getmLenList(0);
  }
  void print() override{
    std::cout << "변의 길이 : " ;
    std::cout << this->getmLenList(0) << ' ';
    std::cout  << '\n';
    std::cout << "둘레 : " <<this->getRound()<< '\n';
    std::cout << "넓이 : " <<this->getArea()<< '\n';
  }
};
class RegularPentagon : public Polygon {

public:
  RegularPentagon (const int &a){
    this->setmPoint(5);
    this->addmLenList(a);
  }
  int getRound() const override{
    return this->getmLenList(0)*5;
  }
  double getArea() const override{
    return 1.72048*this->getmLenList(0)*this->getmLenList(0);
  }
  void print() override{
    std::cout << "변의 길이 : " ;
    std::cout << this->getmLenList(0) << ' ';
    std::cout  << '\n';
    std::cout << "둘레 : " <<this->getRound()<< '\n';
    std::cout << "넓이 : " <<this->getArea()<< '\n';
  }
};


int main() {
  std::vector<Polygon *> v={new Ellipse(4,10),new RegularHexagon(4),new RegularPentagon(4)};
  for (auto p : v) {
    p->print();
  }


  return 0;
}
