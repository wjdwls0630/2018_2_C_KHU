#include <iostream>

int pow_int(int x, int y) {
  if(y==0){
    return 1;
  }else{

    return x*pow_int(x, y-1);
  }

}

int main() {
  int x, y;
  std::cin >> x>>y;
  std::cout <<pow_int(x,y) << '\n';;

  return 0;
}
