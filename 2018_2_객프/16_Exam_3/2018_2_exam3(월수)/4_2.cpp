#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
template <typename T>
class Position {
private:
  T x;
  T y;
public:
  Position (const T &x=0, const T &y=0);
  const Position<T> operator+(const Position<T> &p);
  const Position<T> operator-(const Position<T> &p);
  friend std::ostream & operator<<(std::ostream & os, const Position<T> & p){
    return os<<"("<<p.x<<", "<<p.y<<")";
  }
};
template <typename T>Position<T>::Position(const T &x, const T &y):
x(x),y(y){}
template <typename T>const Position<T> Position<T>::operator+(const Position<T> &p){
  T result_x=this->x+p.x;
  T result_y=this->y+p.y;
  return Position<T>(result_x,result_y);
}
template <typename T>const Position<T> Position<T>::operator-(const Position<T> &p){
  T result_x=this->x-p.x;
  T result_y=this->y-p.y;
  return Position<T>(result_x,result_y);
}

template<typename T>
Position<T> add_all(std::list<Position<T>> l);
int main(){
	Position<int> a1(2, 3);
	Position<int> a2(3, 5);
	Position<int> a3(2, 9);
	cout << a1 + a2 << '\n';

	Position<double> b1(3.4, 2.8);
	Position<double> b2(0.2, 1.9);
	cout << b1 - b2 << '\n';

	list<Position<int>> pl1;
	pl1.push_back(a1);
	pl1.push_back(a2);
	pl1.push_back(a3);
	cout << add_all(pl1) << '\n';
	list<Position<double>> pl2;
	pl2.push_front(b1);
	pl2.push_front(b2);
	cout << add_all(pl2) << '\n';
	return 0;
}

template<typename T>
Position<T> add_all(std::list<Position<T>> l){
  Position<T> result;
  std::for_each(l.begin(),l.end(),[&result](Position<T> x)->void{ result=result+x ;});

  return result;
}
