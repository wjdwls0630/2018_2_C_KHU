#include <iostream>
#include <array>
#include <functional>

template <typename T>
int Compare(const T &a, const T &b) {
  if (a>b) {
    return 0;
  } else if (a==b) {
    return 1;
  } else {
    return 2;
  }
}

template<typename T>
void swap(T &a, T &b){
  T temp=a;
  a=b;
  b=temp;
}

template<typename T>
void sort_A(T &a){
  int smallest_index;

  for (int i = 0; i < a.size()-1; i++) {
    smallest_index=i;
    for (int j = i+1; j < a.size(); j++) {
      if (Compare(a[j],a[smallest_index])==2) {
        smallest_index=j;
      }
    }
    swap(a[i],a[smallest_index]);
  }
  std::cout << "Ascending sort of integer array" << '\n';
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << ' ';
  }
  std::cout  << '\n';
}
template<typename T>
void sort_D(T &a){
  int largest_index;
  for (int i = 0; i < a.size()-1; i++) {
    largest_index=i;
    for (int j = i+1; j < a.size(); j++) {
      if (Compare(a[j],a[largest_index])==0) {
        largest_index=j;
      }
    }
    swap(a[i],a[largest_index]);
  }
  std::cout << "Descending sort of integer array" << '\n';
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << ' ';
  }
  std::cout  << '\n';

}



int main() {
  std::array<int,5>a={2,3,4,1,5};
  std::array<double,5>b={2.7,5.6,10.12,22.22,1.2};
  std::function<void(void)> sortI_A=[&a]()->void {sort_A(a);};
  std::function<void(void)> sortI_D=[&a]()->void {sort_D(a);};
  std::function<void(void)> sortD_A=[&b]()->void {sort_A(b);};
  std::function<void(void)> sortD_D=[&b]()->void {sort_D(b);};
  sortI_A();
  sortI_D();
  sortD_A();
  sortD_D();


  return 0;
}
