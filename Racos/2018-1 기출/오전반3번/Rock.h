#pragma once
#include "PureBase.h"
class Rock : public PureBase
{
public:
	void shoot();
};
void Rock::shoot() { cout << "¹ÙÀ§" << endl; }