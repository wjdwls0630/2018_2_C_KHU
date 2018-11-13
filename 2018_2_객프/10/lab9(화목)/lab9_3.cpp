#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int fibonacci(int);
void lowercase(string& plainText);

int main() {
  int n;
  int *p;
  while (1) {
    string plainText = "";
    string cryptoText = "";
    cout << "input : ";
    cin >> plainText;
    /* 알파벳이 아닌 문장 필터링 */
    for (int i = 0; i < plainText.length(); i++) {
      if (isalpha((int)plainText[i])==0) {
        std::cout << "Error : 100 Only can input alpha" << '\n';
        exit(100);
      }
    }
    lowercase(plainText);
    cout << "입력한 평문 : " << plainText << endl;
    /* LAB#06의 피보나치 수열을 활용하세요. */
    int num=0;
    int div_26=0;
    for (int i = 0; i < plainText.length(); i++) {
      num=(int)plainText[i];
      num+=fibonacci(i);
      if (num>122) {
        num-=122;
        div_26=num/26;
        num-=26*div_26;
        if (num==0) {
          num=96+26;//122;
        }else{
          num+=96;
        }
      }
      cryptoText+=(char)num;
    }
    cout << cryptoText << endl;
    cout << "\n";
  }
  return 0;
}

int fibonacci(int n){
  if (n==0) {
    return 0;
  } else if(n==1){
    return 1;
  } else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
void lowercase(string& plainText){
  int num=0;
  for (int i = 0; i < plainText.length(); i++) {
    num=(int)plainText[i];
    if (num>=65&&num<=90) {
      plainText[i]=(char)(num+32);
    }
  }
}
