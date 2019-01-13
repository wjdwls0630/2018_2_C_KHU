#pragma once
#include <iomanip>
#include "list.h"
#include "photoType.h"

using namespace std;

class EventType {
private:
   string name;
   List<string> nameList;
public:
   EventType(string eName) { name = eName;}
   EventType() { }
   bool operator==(EventType inEvent) { if (name == inEvent.name) return true; else return false; }
   bool operator<(EventType inEvent) { if (name < inEvent.name) return true; else return false; }
   bool operator>(EventType inEvent) { if (name > inEvent.name) return true; else return false; }
   void operator=(EventType inEvent) { name = inEvent.name;
      string* strPtr;
      inEvent.nameList.ResetList();
      while ((strPtr = inEvent.nameList.GetNextItemPtr())) { nameList.Add(*strPtr); }
   }

   void SetEventName(string in) { name = in; }
   string GetEventName() { return name; }
   //event의 nameList에 새 사진키를 추가
   void AddPhotoKey(string inPhotoKey) {
      if (nameList.RetrievePtr(inPhotoKey)) { cout << " Photo already exists in current Event! \n"; }
      else nameList.Add(inPhotoKey);
   }

//?????[문제 3-2-B-iii]
//name list에 있는 사진 이름을 이용하여 master list를 검색하여 자세한 정보를 화면에 출력
   void DisplayDetail(List<PhotoType>& master) {
    cout << "\t";
    cout.width(20);
    cout<<left<< "[Photo Name]" ;
    cout.width(20);
    cout<<left<< "[Event Name]";
    cout.width(20);
    cout<<left<< "[Contents]" << endl;
    PhotoType* tRecord;
    master.ResetList();
    for (int i = 0; i < master.GetLength(); i++) {
      tRecord=master.GetNextItemPtr();
      if (tRecord->GetEventName()==this->name) {
        tRecord->DisplayOnScreen();
      }
    }
    return ;
   }

//?????[문제 3-2-B-iv]
// nameList에서 입력된 사진명이 있는 지 확인하여 존재하면 master list에서 찾아서 해당항목의 포인터를 리턴
   PhotoType* FindByNameKey(List<PhotoType> &master, string inPhotoKey) {
      PhotoType ptemp(inPhotoKey);
      PhotoType * reTemp;
      if (this->nameList.Retrieve(inPhotoKey)==-1) {
        return NULL;
      }
      reTemp=master.RetrievePtr(ptemp);
      return reTemp;
   }


   //?????[문제 3-2-B-v]
   // 현 이벤트에 소속된 사진 중에서 contents에 입력된 키를 포함하는 첫번째 사진을 찾아서 그 사진 항목의 포인터를 리턴
   PhotoType* FindByContentsKey(List<PhotoType> &master, string contentKey) {
      nameList.ResetList();
      string *temp;
      PhotoType *pPtr, ptemp;
      while ((temp = nameList.GetNextItemPtr())) {
        ptemp.SetPhotoName(*temp);
        pPtr=master.RetrievePtr(ptemp);
        if (pPtr->FindKeyFromContents(contentKey)) {
          return pPtr;
        }
      }
      return NULL;
   }
};
