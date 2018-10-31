#include <iostream>
#include <iomanip>

using namespace std;
void printNextFiveFib2(int a, int b,int &c);
void printNextFiveFib(int a,int b,int c);
int main() {
  int a ,b,c;
  std::cin >> a>>b>>c;




  printNextFiveFib(a,b,c);
  std::cout  << '\n';
  printNextFiveFib2(a,  b,  c);
  std::cout  << '\n';
  return 0;
}

void printNextFiveFib2(int a, int b,int &c){
  int next = a+b;
  if (c==1) {
    std::cout <<setw(4) <<next ;
  } else {
    std::cout <<setw(4) <<next ;
    c-=1;
    printNextFiveFib2(b, next,c);
  }






}
void printNextFiveFib(int a,int b,int c){
  int next = a+b;


  if (c==1) {
    std::cout <<setw(4) <<next ;

  } else{
    std::cout << setw(4) << next;
    printNextFiveFib(b, next,c-1);

  }




}
