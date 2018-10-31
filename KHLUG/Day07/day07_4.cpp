#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;


int main() {

  srand(time(NULL));
  ofstream fs1;
  fs1.open("day07_4.txt");
  for(int i =0; i<MAX_ROWS; i++ ){

    for(int j = 0; j < MAX_COLS; j++)
    {
      fs1<<rand()%100000<<'\t';
    }
    fs1<<"\n";
  }
  fs1.close();

  int data_set[MAX_ROWS][MAX_COLS];
  ifstream fs2;
  fs2.open("day07_4.txt");

  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COLS; j++) {
      fs2>>data_set[i][j];
    }
  }

  fs2.close();
  float sum;



  for (int i = 0; i < MAX_ROWS; i++) {
    sum=0;
    for (int j = 0; j < MAX_COLS; j++) {

      sum+=data_set[i][j];

    }




    cout << i <<"번째 줄의 평균: "<<sum/MAX_COLS<<'\n';
  }
  return 0;
}
