#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct Word
{
	string word;
	string word_detail;
	bool operator > (Word& w)
	{
		return (w.word < this->word);
	}
	bool operator < (Word& w)
	{
		return (w.word > this->word);
	}
	Word(string w, string d)
		: word(w), word_detail(d) {}
};