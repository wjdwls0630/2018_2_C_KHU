class Student
{
	char *name;
	char stuNum[10];
	int grade; // 학년
	bool graduateToBe; // 졸업예정자
	bool lockerUser; // 사물함사용자
public:
	Student();
	Student(char* _name, char* _stuNum, int _grade, bool _gra, bool _locker);
	Student(const Student &st);
	
	void PrintGraduate();
	void PrintLocker();
	void SetGraduate(bool _gra);
	void SetLocker(bool _lock);
};