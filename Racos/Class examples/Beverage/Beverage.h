class Beverage
{
	char* name;
	int cost;
public:
	Beverage();
	Beverage(char *, int);
	~Beverage();
	void SetName(char* _na);
	void SetCost(int _co);
	char* GetName();
	int GetCost();
	void Print();
};