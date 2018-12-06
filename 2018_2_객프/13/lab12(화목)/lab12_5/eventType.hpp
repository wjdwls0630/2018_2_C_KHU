#ifndef eventType_hpp
#define eventType_hpp
using namespace std;
class eventType {
private:
  string eventName;
  vector<string> memPhotoList;
  int numOfphoto;

public:
  eventType (const string &eventName, const string &photoName);
  string GetEventName() const;
  void GetFileNameList(string *tempList);
  void AddFileName(string photoName);
  int GetNumOfPhoto() const;


};
eventType::eventType (const string &eventName, const string &photoName) : eventName(eventName),numOfphoto(1){
  this->memPhotoList.insert(this->memPhotoList.begin(),photoName);
}
string eventType::GetEventName() const{ return this->eventName ; }

void eventType::GetFileNameList(string *tempList){
  for (int i = 0; i < this->memPhotoList.size(); i++) {
    *(tempList+i)=this->memPhotoList[i];
  }
}
void eventType::AddFileName(string photoName){
  string target=photoName;
  int insert_index=0;
  for (int i = 0; i < this->memPhotoList.size(); i++) {
    if (target<this->memPhotoList[i]) {
      insert_index=i;
      break;
    }
    insert_index++;
  }
  this->memPhotoList.insert(memPhotoList.begin()+insert_index,target);
  this->numOfphoto++;
}
int eventType::GetNumOfPhoto() const{ return this->numOfphoto; }

#endif /*eventType_hpp*/
