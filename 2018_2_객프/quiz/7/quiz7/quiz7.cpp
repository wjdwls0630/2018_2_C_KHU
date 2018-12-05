#include <iostream>
using namespace std;
class figure {
private:
  string type;
  int side_num;
  int *value;
public:
  figure (const std::string type, const int &n, int *a )
  :type(type),side_num(n){
    value =new int [side_num];
    for (int i = 0; i < side_num; i++) {
      *(value+i)=*(a+i);
    }
  }
  std::string getType() {
    return this->type;
  }
  int getSideNum() {
    return this->side_num;
  }
  int getValue(int index){
    return this->value[index];
  }

  ~figure (){
    delete [] value;
  };
  virtual void print() =0;
  virtual void calculate_circumference() = 0;
};
class triangle : public figure {
public:
  triangle (int *a):figure("triangle",3,a){}
  void print() override{
    std::cout << "type : " <<this->getType() <<'\n';
    std::cout << "side num : " <<this->getSideNum() <<'\n';
    std::cout << "side value : ";
    for (int i = 0; i < this->getSideNum(); i++) {
      std::cout << this->getValue(i) << ' ';
    }
    std::cout  << '\n';
    this->calculate_circumference();
  }
  void calculate_circumference() override{
    int sum=0;
    for (int i = 0; i < this->getSideNum(); i++) {
      sum+=this->getValue(i);
    }
    std::cout << "cirumference : " <<sum <<'\n';
  }
};
class square : public figure {

public:
  square (int *a):figure("square",4,a){}
  void print() override{
    std::cout << "type : " <<this->getType() <<'\n';
    std::cout << "side num : " <<this->getSideNum() <<'\n';
    std::cout << "side value : ";
    for (int i = 0; i < this->getSideNum(); i++) {
      std::cout << this->getValue(i) << ' ';
    }
    std::cout  << '\n';
    this->calculate_circumference();
  }
  void calculate_circumference() override{
    int sum=0;
    for (int i = 0; i < this->getSideNum(); i++) {
      sum+=this->getValue(i);
    }
    std::cout << "cirumference : " <<sum <<'\n';

  }

};
int main() {
  int triangle_element[3]={1,2,3};
  figure * a =new triangle(triangle_element);
  a->print();
  int square_element[4] = {1,2,3,4};
  figure *b = new square(square_element);
  b->print();

  return 0;
}
