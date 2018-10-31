#include <iostream>
void getData(int &val1,int &val2,int &val3);
void calcAvgNVar(int val1, int val2, int val3, float &avg, float&var);
int main() {
  int val1, val2,val3;
  float avg, var;
  getData(val1, val2, val3);
  calcAvgNVar(val1, val2, val3,avg, var);
  std::cout << "avg: " <<avg<< '\n';
  std::cout << "var: " <<var<< '\n';

  return 0;
}

void getData(int &val1,int &val2,int &val3) {
  std::cin >> val1>>val2>>val3;
}
void calcAvgNVar(int val1, int val2, int val3, float &avg, float&var) {
  avg=(val1+val2+val3)/3;
  var=(float)(val1*val1+val2*val2+val3*val3)/3-(avg*avg);
}
