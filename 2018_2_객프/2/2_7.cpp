// assignment operator
#include <iostream>
using namespace std;
int main () {
int a, b; a=10;
b = 4;
a = b;
b = 7;
  cout << "a:";
  cout << a;
  cout << " b:";
  cout << b;
}

// a:?,  b:?
// a:10, b:?
// a:10, b:4
// a:4,  b:4
// a:4,  b:7
