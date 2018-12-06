#pragma once
#pragma once

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 100

// Generic list class

//?? [항목 1-1] template list class "List" 를 정의하라. 
{
public:

	List(int size=MAXSIZE) { // constructor
		m_Length = 0;
		maxSize = size;
		m_Array = new T[maxSize];
	}
	
	~List() {}  //	destructor.

	int GetLength() { 	//	Get a number of records in list.
		return m_Length;
	}

	// 	If full, return true. Otherwise return false.
	bool IsFull() {
		if (m_Length > maxSize - 1)
			return true;
		else
			return false;
	}

	void MakeEmpty() { m_Length = 0; } // clear the list
	void ResetList() { curIndx = -1; } // 리스트 스캔을 위한 curIndx를 초기화 한다. 
	
	// 다음 항목을 data에 리턴한다. 함수 리턴 값으로 다음 항목이 있으면 1을 없으면 0 리턴한다. 
	int GetNextItem(T& data) {
		curIndx++;
		if (curIndx < m_Length) { data = m_Array[curIndx]; return 1; }
		else return 0;
	}
	int Add(T data);
	int Retrieve(T& data); 
	int Delete(T data);
	
private:
	T *m_Array;		// 자료들을 저장할 배열을 포인터
	int curIndx;    // 현재 인덱스
	int m_Length;	// 리스트에 저장된 자료항목 수
	int maxSize;    // 배열의 최대 크기
};


//?? [항목 1-2] Add(T data) 함수를 구현하라. 
/*	입력 : 추가될 항목이 data 저장됨.
출력 : list에 data가 추가되고 m_length가 증가됨. 추가가 성공하면 1 그렇지 않으면 0을 리턴
*/


//?? [항목 1-3] Retrieve(T& dat) 함수를 구현하라.
/*  입력 : data의 primary key가 찾고자 항목의 primary key로 set됨
출력 : data의 primary key와 일치하는 항목을 찾으면 data에 해당 항목전체를 복사하고 그 항목의 index를 리턴한다.
찾지 못하면 -1을 리턴한다.
*/


//?? [항목 1-4] Delete(T data)를 구현하라. 
/*  입력 :	data의 primary key가 삭제하고자 하는 primary key로 set됨
출력 :	data의 primary key와 일치하는 항목을 찾으면 지우고 1을 리턴하고
찾지 못하면 0을 리턴한다.
*/

/*  입력 : data의 primary key가 찾고자 항목의 primary key로 set됨
	출력 : data의 primary key와 일치하는 항목을 찾으면 data에 해당 항목전체를 복사하고 그 항목의 index를 리턴한다. 
		  찾지 못하면 -1을 리턴한다. 
*/
