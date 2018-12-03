#include <iostream>
void print_DOB(int year=2000, int month=1, int day=1) {
  std::cout << "나의 생년월일은 " <<year<<"년 "<<month<<"월 "<<day<<"일 입니다."<< '\n';


}
int main() {
  int year, month, day;
  std::cin >> year>>month>>day;
  print_DOB(year,month,day);
  print_DOB();
  return 0;
}
