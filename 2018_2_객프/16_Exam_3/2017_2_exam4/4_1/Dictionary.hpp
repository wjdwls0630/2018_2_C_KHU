#ifndef Dictionary_hpp
#define Dictionary_hpp
#include <list>
#include "Word.hpp"

class Dictionary {
private:
  std::list<Word> m_wordList;
public:
  Dictionary (){}
  void addWord();
  void sortDictionary();
  void showWord();
  void showAllWord();
};
void Dictionary::addWord(){
  std::string inWord,inWord_detail;
  std::cout << "등록할 단어 : ";
  std::cin >> inWord;
  std::cout << "등록할 단어 설명 : ";
  std::cin >> inWord_detail;
  this->m_wordList.push_back(Word(inWord,inWord_detail));
  this->sortDictionary();
}
void Dictionary::sortDictionary(){
  this->m_wordList.sort();
  std::list<Word>::iterator iter;
  int index=1;
  for (iter = std::begin(this->m_wordList); iter != std::end(this->m_wordList); iter++) {
    iter->setIndex(index);
    index++;
  }
}
void Dictionary::showWord(){
  std::string inWord;
  std::cout << "찾을 단어 : ";
  std::cin >> inWord;
  std::list<Word>::iterator iter;
  for (iter = std::begin(this->m_wordList); iter != std::end(this->m_wordList); iter++) {
    if (iter->getWord()==inWord) {
      std::cout << *(iter) << '\n';
      return;
    }
  }
  std::cout << "해당 정보가 없습니다." << '\n';
  return;
}
void Dictionary::showAllWord(){
  std::list<Word>::iterator iter;
  for (iter = std::begin(this->m_wordList); iter != std::end(this->m_wordList); iter++) {
    std::cout << *(iter) << '\n';
  }
}
#endif /* Dictionary_hpp */
