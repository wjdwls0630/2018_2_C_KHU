#include <list>
#include "Transport.hpp"
#include "Bus.hpp"
#include "Taxi.hpp"

int main() {
  Transport *arr[4]={new Bus(10),new Taxi(10),new Bus(10,30),new Taxi(10,30)};
  for (Transport * elem : arr) {
    elem->print();
  }

  for (auto i = std::begin(arr); i != std::end(arr); i++) {
    delete *i;
  }




  return 0;
}
