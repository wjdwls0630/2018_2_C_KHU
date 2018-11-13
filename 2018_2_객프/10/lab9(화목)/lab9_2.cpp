#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
  int x;
  int y;
public:
  Point (int x= 0, int y = 0): x(x),y(y){}
  void setPoint(const int &x, const int &y) {
    this->x=x;
    this->y=y;
  }
  const Point operator-(const Point &p) const{
    return Point(this->x-p.x,this->y-p.y);
  }
  const Point operator*(const Point &p) const{
    return Point(this->x*p.x,this->y*p.y);
  }
  Point & operator=(const Point &p){
    this->x=p.x;
    this->y=p.y;
    return *this;
  }
  float lengthFromOrigin(){
    float result=sqrt(this->x+this->y);
    return result;
  }

};


int main() {
  int x1=0, y1=0, x2=0, y2=0;
  Point *pP1, *pP2, *pP3;
  cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
  cin >> x1 >> y1;
  cout << "두번째 좌표[x2, y2]를 입력하세요 : ";
  cin >> x2 >> y2;
  pP1 = new Point(x1, y1);
  pP2 = new Point(x2, y2);
  pP3 = new Point(); //x,y가 0으로 초기화
  /* 아래의 방식으로도 x, y값 설정이 가능해야합니다. */
  //pP1->setPoint(x1, y1);
  //pP1->setPoint(x2, y2);
  /***********************************************/
  *pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
  /* pP3을 활용하여 거리값을 구하세요 */
  cout << "두 좌표 사이의 길이는 " <<pP3->lengthFromOrigin()<< "입니다" << endl;
  delete pP1, pP2, pP3;
  return 0;
}
