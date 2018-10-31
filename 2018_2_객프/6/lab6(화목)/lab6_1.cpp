#include <iostream>
#include <string>

using namespace std;

int main() {
  string city, area, street, building; // 시, 구, 로, 건물명
  string address; // 주소
  std::cout << "시 : ";
  std::cin >> city;
  std::cout << "구 : ";
  std::cin >> area;
  std::cout << "로 : ";
  std::cin >> street;
  std::cout << "건물 : ";
  std::cin >> building;

  address+=city+area+street+building;
  std::cout << "\n집 주소 : " <<address<< '\n';
  return 0;
}
