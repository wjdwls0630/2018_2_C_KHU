#include "Student.h"
int main()
{
	Student harry("Harry", 2018101234, "SWCON");
	Student ron;
	ron.setName("Ron");
	ron.setID(2018109876);
	ron.setdept("EE");
	harry.addGrade("Programming", 'A');
	harry.addGrade("English", 'B');
	harry.addGrade("Writing", 'C');
	harry.printGrades();
	harry.print();
	ron.print();
	return 0;
}