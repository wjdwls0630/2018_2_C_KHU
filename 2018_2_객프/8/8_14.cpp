#include <iostream>


int main() {
  double sum =0.0;
  int size;
  std::cout << "Please enter the size : ";
  std::cin >> size;

  if (size>0) {
    int *p =new int [size];
    std::cout << "Please enter " <<size<<" numbers : ";
    for (int i = 0; i < size; i++) {
      std::cin >> *(p+i);
      sum+=*(p+i);
    }
    std::cout << "The average of " ;
    for (int i = 0; i < size-1; i++) {
      std::cout << *(p+i) << ", ";
    }

    std::cout << *(p+size-1) << " is "<<sum/size<<'\n';
    delete[] p;
  }

  return 0;
}

//이 방법 외에도 그냥 배열처럼 사용해도 된다.
