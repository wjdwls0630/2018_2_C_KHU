#include <iostream>
float sum(float x, float y) {
  float result = x+y;
  return result;
}
float sub(float x, float y) {
  float result = x-y;
  return result;
}
float mult(float x, float y) {
  float result = x*y;
  return result;
}
float idiv(float x, float y) {
  float result = x/y;
  return result;
}
float add_mult(float x, float y, float z){
  float result= mult(sum(x,y),z);
  return result;
} // (x + y ) * z
float mult_div(float x, float y, float z){
  float result = idiv((float)mult(x,y),z);
  return result;
} // (x * y) / z
float add_mult_add(float x, float y, float z){
  float result = mult(sum(x,y), sum(y,z));
  return result;
} // (x + y) * ( y + z)
float sub_div_sub(float x, float y, float z){
  float result =(idiv(sub(x, y), sub(x,z)));
  return result;
}// (x - y) / (x - z)
int main() {
  float num1, num2, num3;
  std::cin >> num1>>num2>>num3;
  std::cout << "add_mult = " <<add_mult(num1, num2, num3);
  std::cout << ", mult_div = " <<mult_div(num1, num2, num3);
  std::cout << ", add_mult_add = " <<add_mult_add(num1, num2, num3);
  std::cout << ", sub_div_sub = " <<sub_div_sub(num1, num2, num3)<<"\n";
  return 0;
}
