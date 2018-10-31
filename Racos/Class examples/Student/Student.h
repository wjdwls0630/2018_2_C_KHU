#define NUM_LECTURE 3

class Student
{
	char *name;
	char stuNum[10];
	double score[NUM_LECTURE];
	double average;
	int order;

public:
	Student();
	Student(char* _name, char* _stuNum, double* _score);
	Student(const Student &st);
	~Student();
	void Input(char* _name, char* _stuNum, double* _score);
	void CalcAverage();
	void InputOrder(int _order);
	void Print();
	double GetAverage();
};