#include <iostream>

using namespace std;

//�⺻ Ŭ����
class SampleBase
{
private:
	int dataBase;

public:
	SampleBase(int n = 0) : dataBase(n) {}

	void PrintBase() const { cout << "dataBase = " << dataBase << endl; }
};

//���� Ŭ����
class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:
	SampleDerived(int n1 = 0, int n2 = 0) : SampleBase(n1), dataDerived(n2)
	{}

	void PrintDerived() const { cout << "dataDerived = " << dataDerived << endl; }
};

//����Ŭ������ ���� Ŭ����
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

	//������ ����
	SampleBase* ptrBase;

	SampleBase* ptrList[3] = { &objBase, &objDerived, &objDeDerived };

	ptrBase = &objBase;
	// &objDerived �� &objDeDerived�� �����ϴ�.
	// SampleBaseŬ������ ������ ������ SampleBase��ü �Ǵ� SampleBaseŬ�������� ���� �Ǵ� �������� ��ӹ��� ��� ��ü�� ����ų �� �ִ�.

	ptrBase->PrintBase();

	for (int i = 0; i < 3; i++)
		ptrList[i]->PrintBase();

	return 0;
}