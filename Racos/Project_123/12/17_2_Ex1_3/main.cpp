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
		cout << i+1 << "��° ����� �뺯 �ʿ� �ð��� �Ѱ� �ð��� �Է��ϼ���. ";
		cin >> n >> l;
		users.push_back(TUser(n, l));
	}
	cout << "ȭ��� ������ �Է��ϼ���";
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
				cout << "��, ��� �����ϴ�. ������ �ʿ��մϴ�." << endl;
				return 0; // exit(100);
			}
		}
		update = count-1;
	}
	cout << "��� ������ �뺯�� ���ƽ��ϴ�." << endl;
	return 0;
}