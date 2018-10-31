#include "History.h"
bool operator >(const Record& r1, const Record& r2)
{
	return (r1.amount > r2.amount) ? false : true;
}
bool operator <(const Record& r1, const Record& r2)
{
	return (r1.amount < r2.amount) ? false : true;
}
int main()
{
	History his;
	his.putRecord("Drink", -50000);
	his.putRecord("Dinner", -10000);
	his.putRecord("S pen", -40000);
	his.putRecord("Pencil", -5000);
	his.putRecord("Monthly Input", 200000);
	his.putRecord("Payback from someone", 50000);
	his.sortbyamount();
	~his;
	return 0;
}