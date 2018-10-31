class Account
{
	int id;
	int balance;
	char *name;

public:
	Account();
	Account(char* _name, int _id, int _bal);
	Account(const Account& acc);
	~Account();

	void AddMoney(int n);
	void MinMoney(int n);
	void PrintBalance();
};