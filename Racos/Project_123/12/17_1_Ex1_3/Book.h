#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string bookname;
	int price;
	int point;
	int pcount;
	int bcount;
public:
	Book()
		: bookname("Anybook"), price(100), point(0), pcount(0), bcount(1)
	{
		cout << bookname << " å ����" << endl;
	}
	Book(string newbook)
		: bookname(newbook), price(100), point(0), pcount(0), bcount(1)
	{
		cout << bookname << " å ����" << endl;
	}
	Book(string newbook, int nprice, int npoint, int npcount, int nbcount)
		: bookname(newbook), price(nprice), point(npoint), pcount(npcount), bcount(nbcount)
	{
		cout << bookname << " å ����" << endl;
	}
	Book(const Book& b)
		: bookname(b.bookname), price(b.price), point(b.point), pcount(b.pcount), bcount(b.bcount)
	{
		cout << bookname << " å ����" << endl;
	}
	/*void changeName(string newbook)
	{ 
		cout << bookname << " -> " << newbook << "���� �̸� �ٲ�\n";
		bookname = newbook; 
	}
	void addPoint(int npoint)
	{
		point += npoint;
		pcount++;
		point /= pcount;
		cout << bookname << ":����(" << npoint << ") �߰�, �������(" << point << ")\n";
	}
	void addBook() { bcount++; cout << bookname << ":��� �ϳ� �߰�\n"; }
	void releaseBook()
	{ 
		if (bcount == 0) 
			cout << bookname << ":��� ���� ��� �Ұ�!!!\n"; 
		else 
		{ 
			bcount--; 
			cout << bookname << ":��� �ϳ� ����\n"; 
		} 
	}
	void printInfo()
	{
		cout << bookname << ":����(" << point << "), ����(" << price << "), ���(" << bcount << ")\n";
	}*/
	Book& operator >> (string newbook)
	{
		cout << bookname << " -> " << newbook << "���� �̸� �ٲ�\n";
		bookname = newbook;
		return *this;
	}
	Book& operator << (int npoint)
	{
		point += npoint;
		pcount++;
		point /= pcount;
		cout << bookname << ":����(" << npoint << ") �߰�, �������(" << point << ")\n";
		return *this;
	}
	Book operator++(int)
	{
		bcount++;
		cout << bookname << ":��� �ϳ� �߰�\n";
		return *this;
	}
	Book operator--(int)
	{
		if (bcount == 0)
			cout << bookname << ":��� ���� ��� �Ұ�!!!\n";
		else
		{
			bcount--;
			cout << bookname << ":��� �ϳ� ����\n";
		}
		return *this;
	}
	Book& operator~()
	{
		cout << bookname << ":����(" << point << "), ����(" << price << "), ���(" << bcount << ")\n";
		return *this;
	}
};