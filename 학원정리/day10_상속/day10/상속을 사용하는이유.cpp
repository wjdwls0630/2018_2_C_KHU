#include <iostream>

using namespace std;

//기본 클래스
class SampleBase
{
private:
	int dataBase;

public:
	SampleBase(int n = 0) : dataBase(n) {}

	void PrintBase() const { cout << "dataBase = " << dataBase << endl; }
};

//유도 클래스
class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:
	SampleDerived(int n1 = 0, int n2 = 0) : SampleBase(n1), dataDerived(n2)
	{}

	void PrintDerived() const { cout << "dataDerived = " << dataDerived << endl; }
};

//유도클래스의 유도 클래스
class SampleDeDerived : public SampleDerived
{
private:
	int dataDeDerived;
public:
	SampleDeDerived(int n1 = 0, int n2 = 0, int n3 = 0)
		:SampleDerived(n1, n2), dataDeDerived(n3)
	{}

	void PrintDeDerived() const { cout << "dederived = " << dataDeDerived << endl; }
};


int main()
{
	SampleBase objBase(10);
	SampleDerived objDerived(20, 30);
	SampleDeDerived objDeDerived(40, 50, 60);

	//포인터 선언
	SampleBase* ptrBase;

	SampleBase* ptrList[3] = { &objBase, &objDerived, &objDeDerived };

	ptrBase = &objBase;
	// &objDerived 나 &objDeDerived도 가능하다.
	// SampleBase클래스의 포인터 변수는 SampleBase객체 또는 SampleBase클래스에게 직접 또는 간접으로 상속받은 모든 객체를 가리킬 수 있다.

	ptrBase->PrintBase();

	for (int i = 0; i < 3; i++)
		ptrList[i]->PrintBase();

	return 0;
}