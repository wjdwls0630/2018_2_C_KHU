#include "Time.h"

int main(void)
{
	Time time2(20, 20);

	cout << "첫 번째 알람"<<endl;
	time2.SetAlarm(21,10);
	time2.PrintAlarm();
	cout <<'\n';

	cout << "두 번째 알람"<<endl;
	time2.SetAlarm(2, 30);
	time2.PrintAlarm();



	return 0;

}