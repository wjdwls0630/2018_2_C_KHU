#include <iostream>
#include <string>
using namespace std;

int main()
{
  string database = "love, programming, chair, foollove, station, lovethousand, table, oop, love";
  string keyword,word;

  cout << "keyword : " ;
  std::cin >> keyword;
  int pos=0;
  int wordFirstindex=0;
  int wordLastindex=0;


  while (database.find(',',pos)!=-1) {
    wordLastindex=database.find(',',pos)-1;
    word=database.substr(wordFirstindex,wordLastindex-wordFirstindex+1);

    if (word.find(keyword)!=-1) {
      std::cout << word << '\t';
    }
    pos=wordLastindex+3;
    wordFirstindex=pos;
  }
  //마지막 단어 는 체크 하지 않으므로 마지막 단어 한번 더 체크해야한다.
  word=database.substr(wordFirstindex,wordLastindex-wordFirstindex+1);
  if (word.find(keyword)!=-1) {
    std::cout << word << '\t';
  }
  std::cout  << '\n';
  return 0;
}
