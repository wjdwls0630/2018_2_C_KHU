#include <iostream>

template<typename T>
class Position {
private:
  T x;
  T y;
public:
  Position (const T &x, const T &y);
  T getx() const;
  T gety() const;
  void add(const Position<T> &pos);
  void subtract(const Position<T> &pos);
};
template<typename T>Position<T>::Position(const T &x, const T &y) : x(x),y(y){}
template<typename T>T Position<T>::getx() const{ return this->x ; }
template<typename T>T Position<T>::gety() const{ return this->y ; }
template<typename T>void Position<T>::add(const Position<T> &pos){
  this->x+=pos.x;
  this->y+=pos.y;
}
template<typename T>void Position<T>::subtract(const Position<T> &pos){
  this->x-=pos.x;
  this->y-=pos.y;
}


int main() {
  Position<int> a1(2,3);
  Position<int> a2(3,5);
  Position<double> b1(3.4,2.8);
  Position<double> b2(0.2,1.9);

  a1.add(a2);
  std::cout << a1.getx() <<", " <<a1.gety()<<'\n';
  b1.subtract(b2);

  std::cout << b1.getx() <<", " <<b1.gety()<<'\n';


  return 0;
}
