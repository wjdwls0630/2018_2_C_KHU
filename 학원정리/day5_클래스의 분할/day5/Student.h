
class Student
{
private:
	// ������� ����
	char name[81];
	int korean;
	int math;
	int english;
	double average;
	char grade;

public:

	//��� �Լ��� ����ο� ���Ǻθ� �и��� ���� Ŭ���� �������� ����θ� ���ܵд�.
	//������

	Student();
	Student(const char* str, int k, int m, int e);
	//�Ҹ���

	//�����ڿ� ������
	//void SetName(char Name[81]) { for (int i = 0; i < 81; i++) { name[i] = Name[i]; }; }
	void SetName(const char* str);
	char *GetName() { return name; }

	void SetKorean(int val);
	int GetKorean() { return korean; }

	void Setmath(int val) { math = val; }
	int Getmath() { return math; }

	void Setenglish(int val) { english = val; }
	int Getenglish() { return english; }

	double Getaverage();

	char GetGrade();

	//���
	void Print();

};



