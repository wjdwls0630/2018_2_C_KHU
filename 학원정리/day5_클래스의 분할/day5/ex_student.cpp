#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"						//헤더 파일 : 저렇게 만들어 두면 언제든지 끌어다 쓸 수 있다.
using namespace std;








int main()
{
	/*
	Student cs;
	Student yh;
	Student gd;
	char ChName[81] = "김철수";
	char YhName[81] = "박영희";
	char GdName[81] = "홍길동";

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

	Student cs("김철수", 88, 76, 64), yh("박영희", 92, 88, 94), gd("홍길동", 96, 64, 48);

	cs.Print();
	yh.Print();
	gd.Print();


	return 0;
}

