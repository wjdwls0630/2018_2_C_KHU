#include <iostream>
#include <cmath>

void getArea(int base, int height, float &area);
void getLength(int base, int height, float &length);
void printResult(int base, int height,float area, float length);
int main() {
  int base, height;
  float area=0, length=0;
  std::cin >> base>>height;
  getArea(base, height, area);
  getLength(base, height, length);
  printResult(base, height, area, length);


  return 0;
}

void getArea(int base, int height, float &area){
  area=base*height*0.5;
}
void getLength(int base, int height, float &length){
  length=sqrt(pow(base, 2)+pow(height, 2))+base+height;
}
void printResult(int base, int height,float area, float length){
  std::cout << "base: " <<base<< '\n';
  std::cout << "height: " <<height<< '\n';
  std::cout << "area: " <<area<< '\n';
  std::cout << "length: " <<length<< '\n';
}
