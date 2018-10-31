#include "TUser.h"
TUser::TUser(int n = 0, int l = 0)
	: need(n), limit(l), isUsing(false) {}
bool TUser::time_goes_on(int& tuse)
{
	if (isUsing)
	{
		need--;
		if (need == 0)
			tuse--;
	}
	else
	{
		limit--;
		if (limit == 0)
			return false;
	}
	return true;
}
void TUser::inToilet(int& tuse)
{
	isUsing = true;
	tuse++;
}