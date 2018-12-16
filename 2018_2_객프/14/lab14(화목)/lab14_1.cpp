#include <iostream>
#include <vector>
void printVector(std::vector<int> v,int num);
int main() {
  std::vector<int> list{10,20,30,40,50};
  int num;
  while (1) {
    std::cout << "출력 할 숫자의 수 : ";
    std::cin >> num;
    if (num==0) {
      break;
    } else{
      printVector(list,num);
    }
  }
  std::cout << "프로그램을 종료합니다..." << '\n';
  return 0;
}
void printVector(std::vector<int> v,int num) {
  try{
    for (int i = 0; i < num; i++) {
      std::cout << v.at(i) << ' ';
    }
    std::cout << '\n';
  } catch(std::exception &){
    std::cout << "\nIndex out of range. please try again." << '\n';
  }
}
