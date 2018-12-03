#include <iostream>

class Train {
protected:
  int mPeople; // 사람 수
public:
  Train(){};
  Train(int people):mPeople(people){};
  ~Train() {};
  virtual int station(int takeOff, int takeOn)=0;
};

class Ktx : public Train{
public:
  Ktx() : Train(0) {}
  Ktx(int people) : Train(people){}
  ~Ktx() {}
  // 기차에 사람이 타고 내리는 함수
  int station(int takeOff, int takeOn) override{
    if (this->mPeople+takeOn<=300) {
      this->mPeople+=takeOn;
    } else{
      std::cout << "정원초과입니다" << '\n';
      return 0;
    }
    if (this->mPeople-takeOff>=0) {
      this->mPeople-=takeOff;
    } else{
      std::cout << "정원미달입니다" << '\n';
      return 0;
    }
    return 1;
  };
  int getPeople() const{ return this->mPeople;};
};
int main() {
  Ktx k;
  int takeOff_num;
  int takeOn_num;
  int target=0;
  int i;

  for (i = 0; i < 5; i++) {
    std::cout <<i+1 <<"번역 : ";
    std::cin >> takeOff_num>>takeOn_num;
    if (k.station(takeOff_num, takeOn_num)==0) {
      break;
    }
    if (target<k.getPeople()) {
      target=k.getPeople();
    }
  }
  if (i==5) {
    std::cout << "가장 사람이 많이 탑승 했을 때의 사람 수 = " <<target<< '\n';
  }




  return 0;
}
