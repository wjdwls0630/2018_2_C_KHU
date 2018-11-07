#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
  ifstream ifs;
  ifs.open("temp_UNIX.txt");
  int line_count=0;
  string line;
  while (getline(ifs,line)) {
    line_count++;
  }
  ifs.close();
  double temp;
  std::vector<double> temp_v(line_count);
  ifstream ifs1;
  ifs1.open("temp_UNIX.txt");
  int i=0;
  while (ifs1) {
    ifs1>>temp;
    temp_v[i]=temp;
    i++;
  }

  double smallest=temp_v[0];
  int small_index=0;
  for (int i = 0; i < temp_v.size(); i++) {
    if (temp_v[i]<smallest) {
      smallest=temp_v[i];
      small_index=i;
    }
  }
  temp_v[small_index]=1000;
  double smallest_2=temp_v[0];
  int small_index_2=0;
  for (int i = 0; i < temp_v.size(); i++) {
    if (temp_v[i]<smallest_2) {
      smallest_2=temp_v[i];
      small_index_2=i;
    }
  }

  std::cout << "Coldest: " <<smallest<< '\n';
  std::cout << "Second coldest: " <<smallest_2<< '\n';

  ifs1.close();


  return 0;
}

//벡터는 꼭 크기를 지정해주자 아니면 segmentation fault 난다. 꼭 기억하자
