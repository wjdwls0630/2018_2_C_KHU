#include <iostream>
using namespace std;

class figure{
private:
  string type;
  int side_num;
  int* value;
public:
  figure();
  figure(const std::string type, const int &n, int *a );
  ~figure();
  std::string getType() const;
  int * getAllValue() const;
  int getValueI(const int &index) const;
  int getSideNum() const;
  void showValue();
  virtual void print() = 0;
  virtual void calculate_circumference() = 0;
};
figure::figure(){}
figure::figure (const std::string type, const int &n, int *a )
:type(type),side_num(n){
  value =new int [side_num];
  for (int i = 0; i < side_num; i++) {
    *(value+i)=*(a+i);
  }
}
figure::~figure(){ delete [] value; }

std::string figure::getType() const{ return this->type; }
int * figure::getAllValue() const{ return this->value; }
int figure::getValueI(const int &index) const{ return this->value[index]; }
int figure::getSideNum() const{ return this->side_num; }
void figure::showValue() {
  for (int i = 0; i < this->side_num; i++) {
    std::cout << this->value[i] << ' ';
  }
  std::cout << '\n';
}

class triangle : public figure {
private:
  int circumference;
public:
  triangle (int *a);
  virtual void print() override;
  virtual void calculate_circumference() override;
};
triangle::triangle(int *a):figure("triangle",3,a),circumference(0){
  this->calculate_circumference();
}
void triangle::print() {
  std::cout << "type : " <<this->getType() <<'\n';
  std::cout << "side num : " <<this->getSideNum() <<'\n';
  std::cout << "side value : ";
  this->showValue();
  std::cout << "circumference : " <<this->circumference <<'\n';
}
void triangle::calculate_circumference() {
  for (int i = 0; i < this->getSideNum(); i++) {
    this->circumference+=this->getValueI(i);
    //this->circumference+=this->getAllValue()[i];
  }
}

class square : public figure {
private:
  int circumference;
public:
  square (int *a);
  virtual void print() override;
  virtual void calculate_circumference() override;
};
square::square(int *a):figure("square",4,a),circumference(0){
  this->calculate_circumference();
}
void square::print() {
  std::cout << "type : " <<this->getType() <<'\n';
  std::cout << "side num : " <<this->getSideNum() <<'\n';
  std::cout << "side value : ";
  this->showValue();
  std::cout << "circumference : " <<this->circumference <<'\n';
}
void square::calculate_circumference() {
  for (int i = 0; i < this->getSideNum(); i++) {
    this->circumference+=this->getValueI(i);
    //this->circumference+=this->getAllValue()[i];
  }
}



int main(){
  int triangle_element[3] = {1, 2, 3};
  figure* a = new triangle(triangle_element);
  a->print();
  std::cout << '\n';

  int square_element[4] = {1, 2, 3, 4};
  figure* b = new square(square_element);
  b->print();


  return 0;
}
