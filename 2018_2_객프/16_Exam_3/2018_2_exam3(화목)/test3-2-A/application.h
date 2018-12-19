#pragma once
#include "list.h"
#include "photoType.h"
class Application {
public:
   Application(): outFileName("test.txt"), inFileName("test.txt") {}
   void Run();  // 응용 프로그램 실행
   void AddPhoto();   // 키보드로부터 사진정보를 입력받아서 리스트에 추가
   void DeletePhoto();   // 사진명을 입력받아서 해당 사진을 리스트에서 삭제
   //?????[문제 3-2-A-v]
   void FindPhoto();   // 사진명을 입력받아서 해당 사진을 찾아서 자세한 정보를 화면에 출력
   void FindPhotoByEvent(); // event 명을 입력받아서 리스트에서 해당 이벤트에서 찍은 모든 사진을 찾아서 화면에 출력
   //?????[문제 3-2-A-v]
   void DisplayList(); // 리스트에 저장된 모드 사진 정보를 화면에 출력
   int GetCommand(); //
   int ReadAllFromFile();  // read all the records in file and store in vector arrays
   int WriteAllToFile(); // write all photo records to disk.
   //?????[문제 3-2-B-ii]
   int AddPhotoToList(PhotoType inItem); // 사진정보를 입력받아서 mater list와 event list에 추가
   //?????[문제 3-2-B-iii]
   void DisplayByEventUsingEL();
   void SearchByPhotoNameNEvent();
   void SearchByEventNContents();


private:
   List<PhotoType> master;
   //List<EventType> eventList;
   string inFileName;
   string outFileName;
};
