#include <iostream>

void ComparisonNumber1(int first,int second,int third) {
  if ((first>second)&&(first>third)) {
    std::cout << "가장 큰 숫자는 " <<first<<"입니다."<< '\n';
    if(second>third){
      std::cout << "두번째로 큰 숫자는 " <<second<<"입니다."<< '\n';
      std::cout << "가장 작은 숫자는 " <<third<<"입니다."<< '\n';
    }else{
      std::cout << "두번째로 큰 숫자는 " <<third<<"입니다."<< '\n';
      std::cout << "가장 작은 숫자는 " <<second<<"입니다."<< '\n';
    }
  }else if ((second>first)&&(second>third)) {
      std::cout << "가장 큰 숫자는 " <<second<<"입니다."<< '\n';
      if(first>third){
        std::cout << "두번째로 큰 숫자는 " <<first<<"입니다."<< '\n';
        std::cout << "가장 작은 숫자는 " <<third<<"입니다."<< '\n';
      }else{
        std::cout << "두번째로 큰 숫자는 " <<third<<"입니다."<< '\n';
        std::cout << "가장 작은 숫자는 " <<first<<"입니다."<< '\n';
      }
    } else if ((third>second)&&(third>first)) {
        std::cout << "가장 큰 숫자는 " <<third<<"입니다."<< '\n';
        if(first>second){
          std::cout << "두번째로 큰 숫자는 " <<first<<"입니다."<< '\n';
          std::cout << "가장 작은 숫자는 " <<second<<"입니다."<< '\n';
        }else{
          std::cout << "두번째로 큰 숫자는 " <<second<<"입니다."<< '\n';
          std::cout << "가장 작은 숫자는 " <<first<<"입니다."<< '\n';
        }
      }else{
        std::cout << "비교할 수 없습니다. 숫자를 다시 입력하세요." << '\n';
      }
}
void Change(int *first,int *second) {
  int temp = *first;
  *first=*second;
  *second=temp;
}
void ComparisonNumber2(int first, int second, int third) {
  int array[3]={first,second,third};
  for (int i = 2; i >=0 ; i--) {
    for (int j = 0; j < i; j++) {
      if (array[j]<array[j+1]) {
        Change(&array[j],&array[j+1]);
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    std::cout << array[i] << '\n';
  }
}
int Average(int num1, int num2, int num3,int num4, int num5) {
  float result=(num1+num2+num3+num4+num5)/5;
  return result;
}
void GetGrade(float score) {
  std::cout << score <<"점 입니다."<< '\n';
  if (score>=90) {
    std::cout << "A" << '\n';
  } else if (score>=80) {
    std::cout << "B" << '\n';
  } else if (score>=70) {
    std::cout << "C" << '\n';
  } else if (score>=50) {
    std::cout << "D" << '\n';
  } else {
    std::cout << "F" << '\n';
  }
}
int main(int argc, char const *argv[]) {
  int first, second, third;
  std::cout << "숫자 3개를 입력하세요 : " ;
  std::cin >> first>>second>>third;
  ComparisonNumber1(first,second,third);
  ComparisonNumber2(first, second, third);
  int num1,num2,num3,num4,num5;
  std::cout << "성적 5개를 입력하세요 : ";
  std::cin >> num1>>num2>>num3>>num4>>num5;
  float score=Average(num1,num2,num3,num4,num5);
  GetGrade(score);
  return 0;
}
