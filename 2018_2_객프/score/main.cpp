#include <iostream>
#include "./Application/Application.hpp"

int main() {
  try{
    Application App;
    App.Run();
  } catch(std::exception &ex){
    std::cout << ex.what() << '\n';
  }
  return 0;
}
