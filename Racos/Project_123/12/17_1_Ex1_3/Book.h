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
		cout << bookname << " 책 생성" << endl;
	}
	Book(string newbook)
		: bookname(newbook), price(100), point(0), pcount(0), bcount(1)
	{
		cout << bookname << " 책 생성" << endl;
	}
	Book(string newbook, int nprice, int npoint, int npcount, int nbcount)
		: bookname(newbook), price(nprice), point(npoint), pcount(npcount), bcount(nbcount)
	{
		cout << bookname << " 책 생성" << endl;
	}
	Book(const Book& b)
		: bookname(b.bookname), price(b.price), point(b.point), pcount(b.pcount), bcount(b.bcount)
	{
		cout << bookname << " 책 생성" << endl;
	}
	/*void changeName(string newbook)
	{ 
		cout << bookname << " -> " << newbook << "으로 이름 바뀜\n";
		bookname = newbook; 
	}
	void addPoint(int npoint)
	{
		point += npoint;
		pcount++;
		point /= pcount;
		cout << bookname << ":평점(" << npoint << ") 추가, 평점평균(" << point << ")\n";
	}
	void addBook() { bcount++; cout << bookname << ":재고 하나 추가\n"; }
	void releaseBook()
	{ 
		if (bcount == 0) 
			cout << bookname << ":재고가 없어 출고 불가!!!\n"; 
		else 
		{ 
			bcount--; 
			cout << bookname << ":재고 하나 감소\n"; 
		} 
	}
	void printInfo()
	{
		cout << bookname << ":평점(" << point << "), 가격(" << price << "), 재고(" << bcount << ")\n";
	}*/
	Book& operator >> (string newbook)
	{
		cout << bookname << " -> " << newbook << "으로 이름 바뀜\n";
		bookname = newbook;
		return *this;
	}
	Book& operator << (int npoint)
	{
		point += npoint;
		pcount++;
		point /= pcount;
		cout << bookname << ":평점(" << npoint << ") 추가, 평점평균(" << point << ")\n";
		return *this;
	}
	Book operator++(int)
	{
		bcount++;
		cout << bookname << ":재고 하나 추가\n";
		return *this;
	}
	Book operator--(int)
	{
		if (bcount == 0)
			cout << bookname << ":재고가 없어 출고 불가!!!\n";
		else
		{
			bcount--;
			cout << bookname << ":재고 하나 감소\n";
		}
		return *this;
	}
	Book& operator~()
	{
		cout << bookname << ":평점(" << point << "), 가격(" << price << "), 재고(" << bcount << ")\n";
		return *this;
	}
};