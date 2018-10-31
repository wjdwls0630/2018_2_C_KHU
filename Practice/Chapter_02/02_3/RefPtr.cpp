#include <iostream>

int main(void) {
  int num=12;
  int *ptr=&num;
  int **dptr=&ptr;
  //포인터 선언

  int &ref = num;
  int *(&pref)=ptr;
  int **(&dpref)=dptr;
  //참조자 선언

  std::cout << "num : " <<num<< '\n';
  std::cout << "&num : " <<&num<< '\n';
  std::cout << "ptr : " <<ptr<< '\n';
  std::cout << "*ptr : " <<*ptr<< '\n';
  std::cout << "dptr : " <<dptr<< '\n';
  std::cout << "**dptr : " <<**dptr<< '\n';
  std::cout << "ref: " <<ref<< '\n';
  std::cout << "&ref: " <<&ref<< '\n';
  std::cout << "pref : " <<pref<< '\n';
  std::cout << "&pref : " <<&pref<< '\n';
  std::cout << "dpref : " <<dpref<< '\n';
  std::cout << "&dpref : " <<&dpref<< '\n';

  return 0;
}
