#include <iostream>
using namespace std;

class Time
{
	int hour;
	int min;
	int sec;
	// expand
	int alarmHour;
	int alarmMin;
	int spareTime;
public :
	Time(int h=0, int m=0, int s=0)
	{
		hour = h;
		min = m;
		sec = s;
	}
	void ShowTime();
	void ShowTimeinSec();
	// expand
	void SetAlarm(int h, int m);
	int CalcDiff();
	void PrintAlarm();
};

