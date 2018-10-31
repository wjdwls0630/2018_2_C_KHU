#include "Book.h"
int main()
{
	Book book1;
	Book book2("Bible", 50000, 75, 2, 5);
	Book book3(book2);
	~book1; ~book2; ~book3;
	book1 >> "Bible 2";
	book1 << 50 << 100;
	book1++;
	book1--; book1--; book1--; ~book1;
	/*book1.printInfo();
	book2.printInfo();
	book3.printInfo();
	book1.changeName("Bible 2");
	book1.addPoint(50);
	book1.addPoint(100);
	book1.addBook();
	book1.releaseBook();
	book1.releaseBook();
	book1.releaseBook();
	book1.printInfo();*/
	return 0;
}