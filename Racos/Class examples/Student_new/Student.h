class Student
{
	char *name;
	char stuNum[10];
	int grade; // �г�
	bool graduateToBe; // ����������
	bool lockerUser; // �繰�Ի����
public:
	Student();
	Student(char* _name, char* _stuNum, int _grade, bool _gra, bool _locker);
	Student(const Student &st);
	
	void PrintGraduate();
	void PrintLocker();
	void SetGraduate(bool _gra);
	void SetLocker(bool _lock);
};