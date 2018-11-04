#include <iostream>
#include <vector>
#include <cmath>

void print(const std::vector<int> &v);
bool is_prime(int n);
std::vector<int> primes(int begin, int end);

int main() {
  int low ,high;
  std::cout << "최소 최대 범위를 입력하세요 : ";
  std::cin >> low>>high;
  std::vector<int> prime_list=primes(low, high);
  print(prime_list);

  return 0;
}

void print(const std::vector<int> &v) {
  for (auto elem : v) {
    std::cout << elem << ' ';
  }
  std::cout  << '\n';
}

bool is_prime(int n){
  if(n<2){
    return false;
  } else{
    bool result =true;
    double r= n;
    double root =sqrt(r);
    for (int trial_factor = 2; result&&(trial_factor<=root); trial_factor++) {
      result=(n%trial_factor!=0);
    }
    return result;
  }
}
std::vector<int> primes(int begin, int end){
  std::vector<int> result;
  for (int i = begin; i <= end; i++) {
    if (is_prime(i)) {
      result.push_back(i);
    }
  }
  return result;
}
