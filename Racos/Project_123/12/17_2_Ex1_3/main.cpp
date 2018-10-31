#include "TUser.h"
//void getData(vector<TUser>& list)
//{
//	int n, l;
//	cin >> n >> l;
//	list.push_back(TUser(n, l));
//}
int main()
{
	vector<TUser> users;
	int n, l, tnum, tuse = 0, update = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << "번째 사람의 용변 필요 시간과 한계 시간을 입력하세요. ";
		cin >> n >> l;
		users.push_back(TUser(n, l));
	}
	cout << "화장실 개수를 입력하세요";
	cin >> tnum;
	int count = 0;
	while (count != 5)
	{
		while (tuse < tnum)
			users[count++].inToilet(tuse);
		for (int i = update; i < 5; i++)
		{
			if (users[i].time_goes_on(tuse) == false)
			{
				cout << "웁스, 사고가 났습니다. 개선이 필요합니다." << endl;
				return 0; // exit(100);
			}
		}
		update = count-1;
	}
	cout << "모두 무사히 용변을 마쳤습니다." << endl;
	return 0;
}