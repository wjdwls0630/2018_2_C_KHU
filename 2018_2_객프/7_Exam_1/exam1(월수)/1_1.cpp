#include <iostream>
#include <fstream>

using namespace std;
int main() {
  ofstream ofs1("text1.txt");
  int num1,num2,num3,num4,num5;
  std::cin >> num1>> num2>> num3>> num4>> num5;
  ofs1<<num1<<' '<<num2<<' '<<num3<<' '<<num4<<' '<<num5;


  ofstream ofs2("text2.txt");
  for (int i = 1; i < 5; i++) {
    for (int j = 1; j <= 5; j++) {
      ofs2<<i*j<<' ';
    }
    ofs2<<'\n';
  }
  ofs1.close();
  ofs2.close();


  ifstream ifs2("text2.txt");

  ofstream ofs3("text3.txt");
  int ifs1_num,ifs2_num;
  int count=0;

  //ù��
  ifstream ifs1("text1.txt");

  ofs3<<"+ ���� ���: " ;
  while (ifs1>>ifs1_num&&ifs2>>ifs2_num) {
    if (ifs1_num!=' '&&ifs1_num!='\n') {
      if (ifs2_num!=' '&&ifs2_num!='\n') {
        ofs3<<ifs1_num+ifs2_num  << ' ';
      }
    }else if(ifs1_num=='\n'||ifs2_num=='\n') {
      break;
    }
  }
  ofs3<<'\n';
  ifs1.close();
  //ù�� end

  //��°��
  ifstream ifs3("text1.txt");

  ofs3<<"- ���� ���: " ;
  while (ifs3>>ifs1_num&&ifs2>>ifs2_num) {
    if (ifs1_num!=' '&&ifs1_num!='\n') {
      if (ifs2_num!=' '&&ifs2_num!='\n') {
        ofs3<<ifs2_num-ifs1_num  << ' ';
      }
    }else if(ifs1_num=='\n'||ifs2_num=='\n') {
      break;
    }
  }
  ofs3<<'\n';

  ifs3.close();

  //��°��

  //��°��

  ifstream ifs4("text1.txt");

  ofs3<<"* ���� ���: " ;
  while (ifs4>>ifs1_num&&ifs2>>ifs2_num) {
    if (ifs1_num!=' '&&ifs1_num!='\n') {
      if (ifs2_num!=' '&&ifs2_num!='\n') {
        ofs3<<ifs1_num*ifs2_num  << ' ';
      }
    }else if(ifs1_num=='\n'||ifs2_num=='\n') {
      break;
    }
  }
  ofs3<<'\n';

  ifs4.close();

  //��°��

  //��°��

  ifstream ifs5("text1.txt");

  ofs3<<"/ ���� ���: " ;
  while (ifs5>>ifs1_num&&ifs2>>ifs2_num) {
    if (ifs1_num!=' '&&ifs1_num!='\n') {
      if (ifs2_num!=' '&&ifs2_num!='\n') {
        ofs3.precision(2);
        ofs3<<(float)ifs1_num/ifs2_num  << ' ';
      }
    }else if(ifs1_num=='\n'||ifs2_num=='\n') {
      break;
    }
  }
  ofs3<<'\n';

  ifs5.close();

  //��°��
  return 0;
}
