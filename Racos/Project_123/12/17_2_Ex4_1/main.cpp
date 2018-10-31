#include "Dictionary.h"
void menu()
{
	cout << "1. Submit Word\n";
	cout << "2. Find Word\n";
	cout << "3. Show Word(s)\n";
	cout << "4. End\n";
}
int main()
{
	int sel;
	Dictionary dic;
	while (1)
	{
		menu();
		cout << "Select menu: ";
		cin >> sel;
		switch (sel)
		{
		case 1:
			dic.addWord();
			break;
		case 2:
			dic.showWord();
			break;
		case 3:
			dic.sortDictionary();
			dic.showAllWord();
			break;
		case 4:
			exit(100);
			break;
		default:
			cout << "Sorry you get the wrong number\n";
			break;
		}
	}
}