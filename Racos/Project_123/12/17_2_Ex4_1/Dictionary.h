#pragma once
#include "Word.h"
class Dictionary
{
private:
	vector<Word> wordList;
public:
	Dictionary();
	void addWord();
	void sortDictionary();
	void showWord();
	void showAllWord();
};