#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Record
{
private:
	string content;
	int amount;
public:
	Record(string cnt, int amt) : content(cnt), amount(amt) {}
	void printRecord() { cout << content << ", " << amount << " won" << endl; }
	friend bool operator >(const Record&, const Record&);
	friend bool operator <(const Record&, const Record&);
};
class History
{
private:
	int balance;
	vector<Record> usageList;
	vector<Record> savingsList;
public:
	History() : balance(100000) {}
	void putRecord(string cnt, int amt)
	{
		if (amt < 0)
		{
			if (balance + amt < 0)
				cout << "You don't have enough money. Usage for " << cnt << " is not saved.\n\n";
			else
			{
				balance += amt;
				usageList.push_back(Record(cnt, abs(amt)));
				cout << "Usage for " << cnt << " is saved. Your balance is " << balance << " won.\n\n";
			}
		}
		else
		{
			balance += amt;
			savingsList.push_back(Record(cnt, amt));
			cout << "Saving for " << cnt << " is saved. Your balance is " << balance << " won.\n\n";
		}
	}
	void sortbyamount()
	{
		sort(usageList.begin(), usageList.end());
		sort(savingsList.begin(), savingsList.end());
	}
	History operator~()
	{
		cout << "Here's your spend list...\n";
		for (unsigned int i = 0; i < usageList.size(); i++)
			usageList[i].printRecord();
		cout << "\nAnd here's your savings list...\n";
		for (unsigned int i = 0; i < savingsList.size(); i++)
			savingsList[i].printRecord();
		cout << "\nThus, your total balance is " << balance << " won.\n";
		return *this;
	}
};