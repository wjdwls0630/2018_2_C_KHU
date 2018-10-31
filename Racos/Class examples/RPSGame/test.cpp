#include <iostream>
using namespace std;

#include "RPSGame.h"

int main()
{
	RPSGame rps;
	for(int i=0; i<5; i++)
		rps.Run();
	rps.Print();
	
	return 0;
}