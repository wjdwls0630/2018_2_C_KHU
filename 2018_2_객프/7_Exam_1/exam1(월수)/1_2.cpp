#include <iostream>
#include <string>

using namespace std;

int main() {
  char a = '(';
  char b = ')';
  int count_a=0,count_b_1=0,count_b_2=0;
  int pos_a=0,first_a=0,last=0;
  int temp=0;
  string line;
  std::cin >> line;
  first_a=line.find(a,pos_a);

  while (first_a!=-1) {

    pos_a=first_a;
    count_a++;

    temp=first_a;
    first_a=line.find(a,pos_a+1);

  }



  pos_a=temp;
  int first_b_1=line.find(b,pos_a+1);
  int pos_b_1=0,pos_b_2=0;
  int first_b_2=line.find(b,pos_b_2);

  while (first_b_1!=-1) {

    pos_b_1=first_b_1;
    count_b_1++;
    first_b_1=line.find(b,pos_b_1+1);

  }


  while (first_b_2!=-1) {

    pos_b_2=first_b_2;
    count_b_2++;
    first_b_2=line.find(b,pos_b_2+1);

  }


  if (count_a!=count_b_2) {
    std::cout << -1 << '\n';
  } else {
    std::cout << count_b_1 << '\n';
  }





  return 0;
}
