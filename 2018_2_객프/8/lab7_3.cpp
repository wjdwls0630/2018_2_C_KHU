#include <iostream>
#include <vector>



int main() {
  double sum = 0;
  const int NUMBER_OF_ENTRIES = 5;
  std::vector<double> numbers(NUMBER_OF_ENTRIES);
  std::cout << "Please enter " <<numbers.size()<<" numbers: ";
  for (double &elem : numbers) {
    std::cin >> elem;
    sum+=elem;
  }
  std::cout << "The average of ";
  for (int i =0; i<numbers.size()-1; i++) {
    std::cout << numbers[i] <<", ";
  }

  std::cout << numbers[numbers.size()-1] <<" is " <<sum/numbers.size()<<'\n';

  return 0;
}
