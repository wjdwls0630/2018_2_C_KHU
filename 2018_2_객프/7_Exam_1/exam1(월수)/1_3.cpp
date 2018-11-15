#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string weather_forecast(string week, int day,int weather);
int main() {
  int tr_num=0;
  std::cin >> tr_num;
  string week;
  int day;
  int weather;
  ofstream ofs("out_data.txt");


  for (int i = 0; i < tr_num; i++) {
    std::cin >> week>>day>>weather;
    ofs<<weather_forecast(week,  day,  weather);
  }

  return 0;
}

string weather_forecast(string week, int day,int weather) {
  string line;
  if (day%2==0) {
    if (weather==0) {
      line="today is "+week+" this is even day and the weather is sunny";

    } else if (weather==1) {
      line="today is "+week+" this is even day and the weather is rainy";

    } else if(weather==2) {
      line="today is "+week+" this is even day and the weather is rainy";


    }
  } else {
    if (weather==0) {
      line="today is "+week+" this is odd day and the weather is sunny";

    } else if (weather==1) {
      line="today is "+week+" this is odd day and the weather is rainy";
    } else if(weather==2) {
      line="today is "+week+" this is odd day and the weather is cloudy";
    }
  }
  line+='\n';
  return line;

}
