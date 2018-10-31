class Hatchery
{
	int time;
	int maxNum;
	int hatNum;
	int level;

public:
	Hatchery();
	Hatchery(int _t, int _max, int _hat, int _lev);
	void MakeZergling();
	void DestroyZergling();
	void Upgrade();
	
};