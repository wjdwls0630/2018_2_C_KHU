#include "Time.h"



void Time::ShowTime()
{
	cout << " [ " << hour <<"��";
	cout << ' '<< min <<"��";
	cout << ' '<< sec <<"�� ] " << endl;
}

void Time::ShowTimeinSec()
{
	cout << hour*60*60+min*60+sec <<" �� " <<endl;
}


void Time::SetAlarm(int h, int m)
{
	alarmHour = h;
	alarmMin = m;
	CalcDiff();
}
int Time::CalcDiff()
{
	if(alarmHour - hour < 0)
	{
		alarmHour+=24;
	}

	if(alarmMin - min < 0)
	{
		alarmHour--;
		alarmMin+=60;
	}

	spareTime = (alarmHour-hour)*60 + (alarmMin-min);
	return spareTime;
}

void Time::PrintAlarm()
{
	cout << spareTime << "�� �� �˶��� �︳�ϴ�."<<endl;
}