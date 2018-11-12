#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>
#include <algorithm>

const int size = 30000;
void SelectionSort(int *a);
void BubbleSort(int *a);
void InsertionSort(int *a);
int SequentialSearch(int *a, int target);
int BinarySearch(int *a, int target);
void swap(int *a, int *b);
void make_list(int *a);
void print_list(int *a);

class StopWatch {
private:
  clock_t start_time;
  bool running;
  double elapsed_time; //경과된 시간

public:
  StopWatch ();
  void start();
  void stop();
  void reset();
  double elapsed() const;
  bool is_running() const;
};
StopWatch::StopWatch () : start_time(0),running(false),elapsed_time(0.0){}
void StopWatch::start(){
  if (!running) {
    running=true;
    start_time=clock();
  }
}
void StopWatch::stop(){
  if (running) {
    clock_t stop_time=clock();
    running=false;
    elapsed_time+= static_cast<double>((stop_time-start_time))/CLOCKS_PER_SEC;

  }

}
void StopWatch::reset(){
  running=false;
  elapsed_time=0.0;
}
double StopWatch::elapsed() const{
  if (running) {
    clock_t current_time=clock();
    return elapsed_time+static_cast<double>((current_time-start_time))/CLOCKS_PER_SEC;
  } else{
    return elapsed_time;
  }
}
bool StopWatch::is_running() const{
  return running;
}

int main() {
  int list[size];
  int temp_list[size];
  StopWatch timer;
  make_list(list);

  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  SelectionSort(temp_list);
  timer.stop();
  std::cout << "SelectionSort elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();


  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  BubbleSort(temp_list);
  timer.stop();
  std::cout << "BubbleSort elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();

  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  InsertionSort(temp_list);
  timer.stop();
  std::cout << "InsertionSort elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();

  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  std::sort(list,list+size);
  timer.stop();
  std::cout << "algorithm sort elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();

  int target=rand()%100000+1;

  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  SequentialSearch(temp_list,target);
  timer.stop();
  std::cout << "SequentialSearch elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();

  for (int i = 0; i < size; i++) {
    temp_list[i]=list[i];
  }
  timer.start();
  std::sort(list,list+size);
  BinarySearch(temp_list,target);
  timer.stop();
  std::cout << "BinarySearch elapsed: " << timer.elapsed() << " seconds\n";
  timer.reset();


  return 0;
}
void SelectionSort(int *a) {
  int smallest_index=0;
  for (int i = 0; i < size-1; i++) {
    smallest_index=i;
    for (int j = i+1; j < size; j++) {
      if (*(a+j)<*(a+smallest_index)) {
        smallest_index=j;
      }
    }
    swap((a+i),(a+smallest_index));

  }

}
void BubbleSort(int *a) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (*(a+j)>*(a+j+1)) {
        swap((a+j), (a+j+1));
      }
    }

  }
}
void InsertionSort(int *a) {
  int target;
  for (int i = 1; i < size; i++) {
    target=*a;
    for (int j = i-1; j >=0; j--) {
      if (*(a+j)>target) {
        *(a+j+1)=*(a+j);
        *(a+j)=target;
      } else{
        break;
      }
    }

  }
}
int SequentialSearch(int *a, int target) {

  int result;
  for (int i = 0; i < size; i++) {
    if (*(a+i)==target) {
      result=i;
      break;
    }
  }
  result=-1;
  return result;
}
int BinarySearch(int *a, int target) {
  int left=0;
  int right=size-1;
  int mid;
  int result;
  while (left<=right) {
    mid=left+(left+right)/2;
    if (*(a+mid)==target) {
      result = mid;
    }else if(a[mid]<target){
      left=mid+1;
    } else if(a[mid]>target){
      right =mid-1;
    }
  }
  result=-1;
  return result;
}

void swap(int *a, int *b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}
void make_list(int *a) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    *(a+i)=rand()%100000+1;
  }
}
void print_list(int *a) {
  for (int i = 0; i < size; i++) {
    std::cout << *(a+i)<<' ' ;
  }
  std::cout  << '\n';
}
