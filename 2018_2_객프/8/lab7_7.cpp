#include <iostream>
#include <vector>

int main() {
  double sum = 0.0;
  double *numbers;
  int size;


  std::cout << "Please enter number of values to process: ";
  std::cin >> size;
  std::vector<double> v(size);

  if (size>0) {
    std::cout << "Please enter " <<size<<" numbers: ";
    numbers=new double[size];
    for (int i = 0; i < size; i++) {
      std::cin >> numbers[i];
      sum+=numbers[i];
    }
    std::cout << "The average of ";
    for (int i = 0; i < size-1; i++) {
      std::cout << numbers[i] << ", ";
    }
    std::cout << numbers[size-1] << " is "<<sum/size<<'\n';
    delete [] numbers;

    sum=0;
    std::cout << "Please enter " <<size<<" numbers: ";
    for (double &elem : v){
      std::cin >> elem;
      sum+=elem;
    }
    for (int i = 0; i < size-1; i++) {
      std::cout << v[i] << ", ";
    }
    std::cout << v[size-1] << " is "<<sum/size<<'\n';

  }

  return 0;
}
