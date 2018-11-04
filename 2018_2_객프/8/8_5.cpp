#include <iostream>
#include <vector>

int main() {
  double sum =0.0;
  const int Number_of_entries =5;
  std::vector<int> v(Number_of_entries);
  std::cout << "Please enter " <<Number_of_entries<<" numbers : ";
  for (int i = 0; i < Number_of_entries; i++) {
    std::cin >> v[i];
    sum+=v[i];
  }
  std::cout << "The average of " ;
  for (int i = 0; i < Number_of_entries-1; i++) {
    std::cout << v[i] << ", ";
  }
  std::cout << v[Number_of_entries-1] << " is "<<sum/Number_of_entries<<'\n';
  return 0;
}
