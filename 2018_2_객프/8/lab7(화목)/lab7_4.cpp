#include <iostream>
#include <vector>
bool check_list(int *list, int n);
int main() {
  int size;
  int *list;
  std::cout << "Please enter number of values to process : ";
  std::cin >> size;
  while (size>0) {
    list=new int[size];
    std::cout << "Please enter numbers : ";
    for (int i = 0; i < size; i++) {
      std::cin >> *(list+i);
    }
    if (check_list(list,size)) {
      std::cout << "True" << '\n';
    } else {
      std::cout << "False" << '\n';
    }
    delete [] list;
    std::cout << "Please enter number of values to process : ";
    std::cin >> size;
  }
  return 0;
}

bool check_list(int *list, int n) {
  int target=0;
  int count=0;
  int count_list[n];
  for (int i = 0; i < n; i++) {
    count=0;
    target=i+1;
    for (int j = 0; j < n; j++) {
      if (*(list+j)==target) {
        count++;
      }
    }
    if (count>1) {
      return false;
    }
    count_list[i]=count;
  }
  for (int i = 0; i < n; i++) {
    if (count_list[i]!=1) {
      return false;
    }
  }
  return true;
}
