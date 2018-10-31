class DifferenceSet
{
	int *a;
	int *b;
	int *diff;
	int aSize;
	int bSize;
	int diffSize;

public:
	DifferenceSet();
	DifferenceSet(int a[], int b[], int _as, int _bs);
	~DifferenceSet();
	void InputOperands();
	void SetOperands(int a[], int b[], int _as, int _bs);
	void CalcDiffSet();
	void Print();
	
};