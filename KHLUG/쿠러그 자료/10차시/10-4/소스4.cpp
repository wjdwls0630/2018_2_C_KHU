#include "head4.h"


int main()
{

	Score arr[3] = { Score(40,50,60,70), Score(77,88,90,68), Score(43,65,46,89) };

	for (int a = 0; a < 3; a++)
		arr[a].print();

	return 0;
}