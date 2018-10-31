#include <iostream>
using namespace std;
int x = 10;
int makeDouble( int param )
{
int x;
   cout << "03: " << x << '\n';
x = param;
   cout << "04: " << x << '\n';
   return param * 2;
}
int main()
{
   cout << "01: " << x << '\n';
   x = makeDouble( x );
   cout << "02: " << x << '\n';
return 0;
}
//global variable
