#include <iostream>

const int size =20;

//class Comparer declaration
class Comparer {
private:
  int compare_count;
  int swap_count;
  bool (*comp)(int,int);

public:
  Comparer (bool (*f)(int,int));
  void reset();
  bool compare(int m, int n);
  void swap(int *a, int *b);
  int comparison() const;
  int swaps() const;
};

//sort function declaration
bool less_than(int a, int b);
bool great_than(int a, int b);
void SelectionSort(int *a, Comparer &compare);
void make_list(int *a);
void print_list(int *a);



int main() {
  int list[size];
  int temp_list[size];
  make_list(list);
  Comparer lt(less_than),gt(great_than);
  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  std::cout << "Before :     " ;
  print_list(temp_list);
  std::cout << "Ascending :     ";
  SelectionSort(temp_list,lt);
  print_list(temp_list);
  std::cout <<lt.comparison() <<" comparisons, " <<lt.swaps()<<" swaps"<< '\n';


  return 0;
}

//class Comparer definition
Comparer::Comparer (bool (*f)(int,int)):compare_count(0), swap_count(0), comp(f){}
void Comparer::reset() {
  compare_count=swap_count=0;
}
bool Comparer::compare(int m, int n) {
  compare_count++;
  return comp(m,n);
}
void Comparer::swap(int *a, int *b) {
  swap_count++;
  int temp=*a;
  *a=*b;
  *b=temp;
}
int Comparer::comparison() const {
  return compare_count;
}
int Comparer::swaps() const {
  return swap_count;
}

//sort function definition

bool less_than(int a, int b){
  return a<b;
}
bool great_than(int a, int b){
  return a>b;
}

void SelectionSort(int *a, Comparer &compare) {
  int smallest_index=0;
  for (int i = 0; i < size-1; i++) {
    smallest_index=i;
    for (int j = i+1; j < size; j++) {
      if (compare.compare(*(a+j), *(a+smallest_index))) {
        smallest_index=j;
      }
    }
    compare.swap((a+i),(a+smallest_index));
  }
}

void make_list(int *a) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    *(a+i)=rand()%100+1;
  }
}
void print_list(int *a) {
  for (int i = 0; i < size; i++) {
    std::cout << *(a+i)<<' ' ;
  }
  std::cout  << '\n';
}
