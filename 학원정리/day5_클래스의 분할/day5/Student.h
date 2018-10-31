
class Student
{
private:
	// 멤버변수 선언
	char name[81];
	int korean;
	int math;
	int english;
	double average;
	char grade;

public:

	//멤버 함수의 선언부와 정의부를 분리할 때는 클래스 내에서는 선언부만 남겨둔다.
	//생성자

	Student();
	Student(const char* str, int k, int m, int e);
	//소멸자

	//설정자와 접근자
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

	//출력
	void Print();

};



