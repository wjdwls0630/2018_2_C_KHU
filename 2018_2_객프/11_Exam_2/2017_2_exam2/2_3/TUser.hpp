#ifndef TUser_hpp
#define TUser_hpp

class TUser {
private:
  int NeedTime;
  int LimitTime;
  bool use;
  bool Alldone;

public:
  TUser (const int &NeedTime=0);
  int getNeedTime() const;
  bool getuse() const;
  bool getAlldone() const;
  void setTime(const int& NeedTime, const int& LimitTime);
  bool goTime(int &nowUse);
  void enter(int &nowUse);
  void print();
};
TUser::TUser (const int &NeedTime): NeedTime(NeedTime),LimitTime(0),use(false),Alldone(false){}
int TUser::getNeedTime() const{ return this->NeedTime; }
bool TUser::getuse() const{ return this->use; }
bool TUser::getAlldone() const{ return this->Alldone ;}
void TUser::setTime(const int& NeedTime, const int& LimitTime){
  this->NeedTime=NeedTime;
  this->LimitTime=LimitTime;
}
bool TUser::goTime(int &nowUse){
  bool result=true;
  if (Alldone) {
    result=true;
  } else{
    if (this->use==false) {
      this->LimitTime--;
      if (this->LimitTime==0) {
        result=false;
      } else{
        result=true;
      }
    } else{
      this->NeedTime--;
      if (this->NeedTime==0) {
        nowUse--;
        this->use=false;
        this->Alldone=true;
        result=true;
      }
    }
  }

  return result;
}
void TUser::enter(int &nowUse){
  this->use=true;
  nowUse++;
}
void TUser::print(){
  std::cout << "필요 시간 : " <<this->NeedTime<< '\n';
  std::cout << "한계 시간 : " <<this->LimitTime<< '\n';
  std::cout << "이용 중 : " <<this->use <<'\n';
}


#endif /* TUser_hpp */
