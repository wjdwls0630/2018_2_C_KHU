#include <iostream>
#include <string>

using namespace std;

void ReadText(std::string &CombString);
int CountCompleteWord(std::string text, std::string subStr);


int main() {

  string CombString,search;

  ReadText(CombString);
  std::cin >> search;

  std::cout << "number of matches for [ " <<search<<" ] :"<< CountCompleteWord(CombString,search)<<'\n';
  return 0;
}

void ReadText(std::string &CombString) {
  std::string line="a";
  int count=1;
  while (line!="") {
    std::cout << "Enter line(Hit return for end)   " <<count<<" : ";
    getline(cin,line);
    if (count==1) {
      CombString+=line;
    } else {
      CombString+=" "+line;
    }
    count++;


  }
  std::cout << "%% Combined String Output %%" << '\n';
  std::cout << CombString << '\n';
}

int CountCompleteWord(string text, string subStr){
  int first_index =0;
  int pos =0;
  string word;
  int last_index=0;
  int count=0;

  while (text.find(' ',pos)!=-1) {
    last_index=text.find(' ',pos)-1; //다음 스페이스 한 칸 전까지 단어
    word=text.substr(first_index,last_index-first_index+1);
    if (word==subStr) {
      count++;

    }
    pos=last_index+2;//다음 글자 시작 인덱스
    first_index=pos;
  }
  return count;
}
