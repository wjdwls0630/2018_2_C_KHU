#include <iostream>
#include <vector>
#include <string>
#include "13_6.hpp"

template<typename T> void SelectionSort(std::vector<T> &a, Comparer<T> &compare);
template<typename T> bool less_than(const T &a, const T &b);
template<typename T> bool great_than(const T &a, const T &b);
template<typename T> std::ostream & operator<<(std::ostream &os, const std::vector<T> &a);
template<typename T> void make_list(std::vector<T> &a);

int main() {
  std::vector<int> original{ 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
  std::vector<int> working=original;

  Comparer<int> lt(less_than<int>),gt(great_than<int>);

  std::cout.width(13);
  std::cout <<std::left <<"Before : " ;
  std::cout << working << '\n';
  std::cout.width(10);
  std::cout <<std::left<<"Ascending : ";
  SelectionSort(working,lt);
  std::cout << working << '\n';
  std::cout << "  (" << lt.comparisons() << " comparisons, "<< lt.swaps() << " swaps)\n";
  std::cout << "----------------------------\n";

  working=original;
  std::cout.width(13);
  std::cout <<std::left <<"Before : " ;
  std::cout << working << '\n';
  std::cout.width(10);
  std::cout <<std::left<<"Descending : ";
  SelectionSort(working,gt);
  std::cout << working << '\n';
  std::cout << "  (" << lt.comparisons() << " comparisons, "<< lt.swaps() << " swaps)\n";
  std::cout << "----------------------------\n";

  std::vector<std::string> str_original { "tree", "boy", "apple","girl", "dog", "cat" };
  std::vector<std::string> str_working;
  str_working=str_original;

  Comparer<std::string> str_lt(less_than<std::string>),str_gt(great_than<std::string>);

  std::cout.width(13);
  std::cout <<std::left <<"Before : " ;
  std::cout << str_working << '\n';
  std::cout.width(10);
  std::cout <<std::left<<"Ascending : ";
  SelectionSort(str_working,str_lt);
  std::cout << str_working << '\n';
  std::cout << "  (" << str_lt.comparisons() << " comparisons, "<< str_lt.swaps() << " swaps)\n";
  std::cout << "----------------------------\n";

  str_working=str_original;
  std::cout.width(13);
  std::cout <<std::left <<"Before : " ;
  std::cout << str_working << '\n';
  std::cout.width(10);
  std::cout <<std::left<<"Descending : ";
  SelectionSort(str_working,str_gt);
  std::cout << str_working << '\n';
  std::cout << "  (" << str_lt.comparisons() << " comparisons, "<< str_lt.swaps() << " swaps)\n";
  std::cout << "----------------------------\n";







  return 0;
}
//sort function definition

template<typename T> void SelectionSort(std::vector<T> &a, Comparer<T> &compare) {
  int select_index;
  for (int i = 0; i <a.size()-1; i++) {
    select_index=i;
    for (int j = i+1; j < a.size(); j++) {
      if (compare.compare(a[j],a[select_index])) {
        select_index=j;
      }
    }
    compare.swap(a[i],a[select_index]);
  }
}
template<typename T> bool less_than(const T &a, const T &b) { return a<b; }
template<typename T> bool great_than(const T &a, const T &b) { return a>b; }
template<typename T> std::ostream & operator<<(std::ostream &os, const std::vector<T> &a){
  os<<'{';
  int size=a.size();
  if(size>0){
    os<<a[0];
    for (int i = 1; i < size; i++) {
      os<<", "<<a[i];
    }
  }
  os<<'}';
  return os;
}
