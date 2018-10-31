#include <iostream>


void multi_table(int n);

int main() {

  multi_table(1);

  return 0;
}

void multi_table(int n) {
  if (n==10) {
    std::cout << "end" << '\n';

  } else {

    std::cout <<"2 * "<<n<<" = "<<2*n<< '\n';
    multi_table(n+1);
  }
}
