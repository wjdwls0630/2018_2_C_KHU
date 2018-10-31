#include <iostream>

using namespace std;

int main() {
  cout<<"기본 정렬 : |"; cout.width(10);
  cout << "00000" << "|" << endl;
  cout.setf(ios::left, ios::adjustfield);
  cout<<"왼쪽 정렬 : |"; cout.width(10);
  cout << "00000" << "|" << endl;
  cout.setf(ios::right, ios::adjustfield);
  cout << "오른쪽 정렬: |"; cout.width(10);
  cout << "00000" << "|" << endl;
  return 0;
}
