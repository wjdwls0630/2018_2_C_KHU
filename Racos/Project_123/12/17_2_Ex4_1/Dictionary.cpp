#include "Dictionary.h"
Dictionary::Dictionary() {}
void Dictionary::addWord()
{
	string wd, dt;
	cout << "Enter Word and meaning: ";
	cin >> wd >> dt;
	wordList.push_back(Word(wd, dt));
}
void Dictionary::sortDictionary()
{
	sort(wordList.begin(), wordList.end());
}
void Dictionary::showWord()
{
	string wd;
	cout << "What do you want to find?: ";
	cin >> wd;
	for (unsigned int i = 0; i < wordList.size(); i++)
	{
		if (wd == wordList[i].word)
		{
			cout << i + 1 << "/" << wordList[i].word << "/" << wordList[i].word_detail << endl;
			break;
		}
	}
}
void Dictionary::showAllWord()
{
	for (unsigned int i = 0; i < wordList.size(); i++)
		cout << i+1 << "/" << wordList[i].word << "/" << wordList[i].word_detail << endl;
}