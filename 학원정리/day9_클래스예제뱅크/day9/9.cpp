#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
/*
class DeskLamp
{
private :
	bool isOn;

public:
	//持失切
	DeskLamp(bool flag = false) : isOn(flag) {}

	//社瑚切

	void TurnOn() { isOn =true; }


	void TurnOff() { isOn = false; }

	void PrintStatus()
	{
		cout << "DeskLamp::isON? " << (isOn ? "on" : "off") << endl;
	}


};

int main()
{
	DeskLamp myLamp;

	myLamp.TurnOn();
	myLamp.PrintStatus();


	myLamp.TurnOff();
	myLamp.PrintStatus();




	return 0;
}
*/

/*
class DeskLamp
{
private:
	bool isOn;

public:
	//持失切
	DeskLamp() : isOn(0) {}

	//社瑚切

	void TurnOn(bool n = true) { isOn = n; }


	void TurnOff(bool n = false) { isOn = n; }

	void PrintStatus()
	{
		cout << "DeskLamp::isON? " << isOn << endl;
	}
};

int main()
{
	DeskLamp lamp;

	lamp.PrintStatus();

	lamp.TurnOn();
	lamp.PrintStatus();

	lamp.TurnOff();
	lamp.PrintStatus();

	return 0;
}
*/
/*
class BankAccount
{
private:
	char owner[81];
	int accountNumber;
	int balance;

public:
	//持失切
	BankAccount() : owner(" "), accountNumber(0), balance(0) { }

	//社瑚切
	

	void SetOwner(const char* str) 
	{	
		strcpy(owner, str);
	}
	char* GetOwner() { return owner; }

	void SetaccountNumber(int n)
	{
		accountNumber = n;
	}
	int GetaccountNumber() { return accountNumber; }

	void Deposit(int n) { balance += n; }

	void Withdraw(int n) { balance -= n; }

	void PrintBalance()
	{
		cout << "owner = " << owner << endl << "accountnumber = " << accountNumber << endl << "Balance = " << balance << endl;
	}

};



int main()
{
	BankAccount account1;

	account1.SetOwner("youngmin");

	account1.SetaccountNumber(324562634);

	account1.Deposit(7000);

	account1.PrintBalance();

	account1.Withdraw(4000);

	account1.PrintBalance();





	return 0;
}
*/

class BankAccount
{
private:
	char owner[81];
	int accountNumber;
	int balance;

	void SetOwner(const char* str)
	{
		strcpy(owner, str);
	}
	void SetAccountNumber(int n)
	{
		accountNumber = n;

	}
public:
	BankAccount() : owner{ 0 }, accountNumber{ 0 }, balance{ 0 } {};

	BankAccount(const char*str, int n) : owner{ 0 }, accountNumber{ 0 }, balance{ 0 }
	{
		SetOwner(str);
		SetAccountNumber(n);
	}

	void Deposit(int n) { balance += n; }

	int Withdraw(int n) { balance -= n; return n; }

	void PrintBalance() const
	{
		cout << "owner = " << owner << endl << "accountnumber = " << accountNumber << endl << "Balance = " << balance << endl << endl;
	}


};

int main()
{
	BankAccount myaccount("youngmin", 12345);

	myaccount.PrintBalance();

	myaccount.Deposit(5000);

	myaccount.PrintBalance();

	myaccount.Withdraw(1000);


	myaccount.PrintBalance();





	return 0;
}