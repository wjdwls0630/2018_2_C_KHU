#include <iostream>

int main() {
  char key;
  bool done;
  std::cin >> key;
  switch (key) {
    case 'p':
    case 'P':
      std::cout << "You choose \"P\"" << '\n';
      break;
    case 'q':
    case 'Q':
      done=true;
      break;
  }
  return 0;
}
