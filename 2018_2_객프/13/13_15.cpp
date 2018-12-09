#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> seq{2,3,4,5,6,7,8};
  std::for_each(std::begin(seq),std::end(seq),[](int x)->void{std::cout << x << ' ';});
  std::cout << '\n';
  if (seq.size()>=2) {
    std::vector<int> seq2(seq.size()-2);
    std::copy(std::begin(seq)+1,std::end(seq)-1, std::begin(seq2));
    std::for_each(std::begin(seq2),std::end(seq2),[](int x)->void{std::cout << x << ' ';});
    std::cout << '\n';
  }
  //begin() 함수는 벡터의 데이터가 있는 리스트의 시작 주소를 리턴하는데, 첫 번째 값 위치입니다.
  //end() 함수는 리스트의 끝 주소를 리턴하는데, 마지막 값보다 한 칸 뒤 위치의 값을 리턴합니다.




  return 0;
}
