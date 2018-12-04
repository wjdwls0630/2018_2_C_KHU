#ifndef eventType_hpp
#define eventType_hpp
using namespace std;
class eventType {
private:
  string eventName;
  vector<string> memPhotoList;
  int numOfphoto;

public:
  eventType ();
  string GetEventName() const;
  void GetFileNameList(int *tempList);
  void AddFileName(string photoName);


};

#endif /*eventType_hpp*/
