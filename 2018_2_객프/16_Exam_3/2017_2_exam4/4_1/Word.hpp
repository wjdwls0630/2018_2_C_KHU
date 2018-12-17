#ifndef Word_hpp
#define Word_hpp
#include <iostream>

class Word {
private:
  int m_index;
  std::string m_word;
  std::string m_word_detail;
public:
  Word (const std::string &word,const std::string &word_detail);
  std::string getWord() const;
  void setIndex(const int& index);
  bool operator <(const Word & word) const;
  bool operator >(const Word & word) const;
  friend std::ostream & operator <<(std::ostream & os, Word & word);
};
Word::Word (const std::string &word,const std::string &word_detail)
:m_word(word),m_word_detail(word_detail){}

std::string Word::getWord() const{ return this->m_word; }

void Word::setIndex(const int& index) { this->m_index=index; }

bool Word::operator <(const Word & word) const { return this->m_word<word.m_word ; }

bool Word::operator >(const Word & word) const{ return this->m_word>word.m_word ; }
std::ostream & operator <<(std::ostream & os, Word & word){
  return os<<word.m_index<<"/"<<word.m_word<<"/"<<word.m_word_detail;
}

#endif /* Word_hpp */
