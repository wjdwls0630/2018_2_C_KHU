#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"						//��� ���� : ������ ����� �θ� �������� ����� �� �� �ִ�.
using namespace std;








int main()
{
	/*
	Student cs;
	Student yh;
	Student gd;
	char ChName[81] = "��ö��";
	char YhName[81] = "�ڿ���";
	char GdName[81] = "ȫ�浿";

	cs.SetKorean (88);
	cs.Setmath (76);
	cs.Setenglish(66);
	cs.SetName (ChName);

	yh.SetKorean(92);
	yh.Setmath(88);
	yh.Setenglish(94);
	yh.SetName(YhName);

	gd.SetKorean(96);
	gd.Setmath(64);
	gd.Setenglish(48);
	gd.SetName(GdName);

	cs.Print();
	yh.Print();
	gd.Print();
	*/

	Student cs("��ö��", 88, 76, 64), yh("�ڿ���", 92, 88, 94), gd("ȫ�浿", 96, 64, 48);

	cs.Print();
	yh.Print();
	gd.Print();


	return 0;
}

