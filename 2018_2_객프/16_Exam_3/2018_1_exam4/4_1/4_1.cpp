#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
void get_data(std::list<int> &list1, int length);
template<typename Iter>
void count_sign_change(Iter iter_begin,Iter iter_end,int &cnt_sign_change);
int main() {
  std::list<int> list1,list2;
  int length,cnt_sign_change;
  std::cout << "list의 길이를 입력하세요 : ";
  std::cin >> length;

  get_data(list1,length);
  std::transform(std::begin(list1),std::end(list1),std::begin(list1),[](int &x)->int{if(x==0){x++;} return x;});
  count_sign_change(std::begin(list1),std::end(list1),cnt_sign_change);

  //transform은 바꾼 대상을 다시 리턴해야 된다.
  for_each(std::begin(list1),std::end(list1),[](int x)->void{std::cout << x << '\t';});
  std::cout<< '\n';
  std::cout << "총 부호 교차 횟수 : " <<cnt_sign_change <<"회"<<'\n';
  return 0;
}
void get_data(std::list<int> &list1, int length){
  int temp;
  for (int i = 0; i < length; i++) {
    std::cout <<i+1 <<" 번 째 원소 입력 : ";
    std::cin >> temp;
    list1.push_back(temp);
  }
}
template<typename Iter> void count_sign_change(Iter iter_begin,Iter iter_end,int &cnt_sign_change){
  int temp=*iter_begin;
  iter_begin++;
  for (Iter i = iter_begin; i != iter_end; i++) {
    temp*=*i;
    if (temp<0) {
      cnt_sign_change++;
    }
    temp=*i;
  }
}
