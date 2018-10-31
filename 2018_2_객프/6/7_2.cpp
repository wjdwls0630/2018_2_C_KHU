#include <iostream>
#include <string>




int main() {

  //string 객체 선언 후 초기화
  std::string word = "fred";
  // word 변수가 4개의 문자를 갖고있기 때문 4를 출력
  std::cout << word.length() << '\n';
  // word 변수가 not empty이기 때문에 "not empty"를 출력
  if (word.empty()) {
    std::cout << "empty" << '\n';
  } else {
    std::cout << "not empty" << '\n';
  }
  // word empty 로 만들기
  word.clear();

  //이제 word 가 empty이므로  empty를 출력한다.

  if (word.empty()) {
    std::cout << "empty" << '\n';
  } else {
    std::cout << "not empty" << '\n';
  }

  //assign a string using operator = method
  word = "Good";
  //prints "Good"
  std::cout << word << '\n';

  //append another string using operator += method
  word += "-bye";
  //prints "Good-bye"
  std::cout << word << '\n';

  //prints first character using operator [] method

  std::cout << word[0] << '\n';
  //prints last character

  std::cout << word[word.length()-1] << '\n';

  //prints "od-by", the substring starting at index 2 of length 5

  std::cout << word.substr(2, 5)<<'\n';

  std::cout << word.find('oo') << '\n';
  //몇 글자 제한 없음 나온 글자의 첫번째 문자의 인덱스를 반환
  std::cout << word.at(1) << '\n';
  //인덱스 번호를 패러미터로 받으면 해당 인덱스에 있는 문자를 반환

  std::string first = "ABC" , last = "XYZ";

  //splice two strings with + operator
  std::cout << first+last << '\n';

  std::cout << "Compare" <<first<<" and ABC: ";

  if (first=="ABC") {
    std::cout << "equal" << '\n';
  } else {
    std::cout << "not equal" << '\n';
  }

  std::cout << "Compare" <<first<<" and XYZ: ";

  if (first=="XYZ") {
    std::cout << "equal" << '\n';
  } else {
    std::cout << "not equal" << '\n';
  }








  return 0;
}
