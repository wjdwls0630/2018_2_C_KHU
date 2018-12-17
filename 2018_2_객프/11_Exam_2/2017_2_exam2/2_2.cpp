#include <iostream>
int calculateTotalNum(int *ColSizeList, int RowSize);
void swap(int &a, int &b);
void SelectionSort(int *a, int n);
void print1D(int *a, int n);
void print2D(int **table,int*ColSizeList,int RowSize,int* input1D);
int main() {
  int RowSize;
  int ColSize;
  int TotalNum=0;
  std::cout << "전체 행의 개수 : " ;
  std::cin >> RowSize;
  int ** table=new int*[RowSize];
  int *ColSizeList=new int[RowSize];
  for (int i = 0; i < RowSize; i++) {
    std::cout <<i+1 <<"행의 길이를 입력 : ";
    std::cin >> ColSize;
    table[i]=new int[ColSize];
    ColSizeList[i]=ColSize;
    std::cout <<i+1 <<"행의 값을 입력 : ";
    for (int j = 0; j < ColSize; j++) {
      std::cin >>table[i][j] ;
    }
  }
  TotalNum=calculateTotalNum(ColSizeList,RowSize);

  int *DescendingSort=new int[TotalNum];

  print2D(table, ColSizeList, RowSize,DescendingSort);
  SelectionSort(DescendingSort,TotalNum);
  std::cout << "1차원 배열에 정렬된 결과 " << '\n';
  print1D(DescendingSort, TotalNum);
  return 0;
}
int calculateTotalNum(int *ColSizeList, int RowSize){
  int sum=0;
  for (int i = 0; i < RowSize; i++) {
    sum+=ColSizeList[i];
  }
  return sum;
}

void swap(int &a, int &b) {
  int temp=a;
  a=b;
  b=temp;
}
void SelectionSort(int *a, int n){
  int target_index=0;
  for (int i = 0; i < n-1; i++) {
    target_index=i;
    for (int j = i+1; j < n; j++) {
      if (a[j]>a[target_index]) {
        target_index=j;
      }
    }
    swap(a[i],a[target_index]);
  }
}

void print1D(int *a, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';
}
void print2D(int **table,int*ColSizeList,int RowSize,int* input1D) {
  int count=0;
  std::cout << "2차원 배열의 값 : " << '\n';
  for (int i = 0; i < RowSize; i++) {
    for (int j = 0; j < ColSizeList[i]; j++) {
      std::cout << table[i][j]<<' ' ;
      input1D[count]=table[i][j];
      count++;
    }
    std::cout << '\n';
  }
}
