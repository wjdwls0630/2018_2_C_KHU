#include <iostream>
using namespace std;
void convert(int usersecond){
int hour=3600;
int minute=60;
int day=3600*24;
int userday=usersecond/day;
usersecond =usersecond%day;
int userhour=usersecond/hour;
usersecond=usersecond%hour;
int userminute=usersecond/minute;
usersecond=usersecond%minute;
std::cout<<"converted time is "<<userday<<" day "<<userhour<<" hour "<<userminute<<" minute "<<usersecond<<" second.";

}
int main(){
int usersecond;
cout<<"enter seconds : ";
cin>>usersecond;
convert(usersecond);
 return 0;
}
