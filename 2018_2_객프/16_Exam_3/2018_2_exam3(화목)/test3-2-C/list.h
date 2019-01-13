#pragma once

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 100


//?????[문제 3-2-A-ii] exception class 정의  

// Generic list class

template <class T>
class List
{
public:

	//===========================================================
	List(int size = MAXSIZE) { // constructor
		m_Length = 0;
		maxSize = size;
		m_Array = new T[maxSize];
	}

	~List() {}  //	destructor.

	//===========================================================
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
	//===========================================================
	bool IsEmpty() {
		if (m_Length == 0) return true;
		else false;
	}
	//===========================================================
	void MakeEmpty() { m_Length = 0; } // clear the list
	//===========================================================
	void ResetList() { curIndx = -1; } // 리스트 스캔을 위한 curIndx를 초기화 한다. 

	// 다음 항목을 data에 리턴한다. 함수 리턴 값으로 다음 항목이 있으면 1을 없으면 0 리턴한다. 
	int GetNextItem(T& data) {
		curIndx++;
		if (curIndx < m_Length) { data = m_Array[curIndx]; return 1; }
		else return 0;
	}
	//?????[문제 3-2-A-iii] GentNextItem을 포인터를 리턴하는 함수로 완성
	// 리스트가 비었거나 현 포인터가 끝에 도달하면 NULL을 그렇지 않으면 다음 항목의 포인터를 리턴한다. 
	T *GetNextItemPtr() {
		//???	
	}

	//?????[문제 3-2-A-i] 
	int Add(T data); // 오름차순으로 추가
	//?????[문제 3-2-A-i]
	int Retrieve(T& data);  // 오름차순으로 정렬된 리스트에서 data의 primary key와 일치하는 항목을 찾아서 복사하여 리턴
	//?????[문제 3-2-A-iv] // 오름차순으로 정렬된 리스트에서 data의 primary key와 일치하는 항목을 찾아서 포인터를 리턴
	T* RetrievePtr(T& data);
	//?????[문제 3-2-A-i]   , //?????[문제 3-2-A-ii] exception처리
	int Delete(T data); // 오름차순이 유지되도록 삭제


private:
	T *m_Array;		// 자료들을 저장할 배열을 포인터
	int curIndx;    // 현재 인덱스
	int m_Length;	// 리스트에 저장된 자료항목 수
	int maxSize;    // 배열의 최대 크기
};


//	입력 : 추가될 항목이 data 저장됨.
//	출력 : list에 data가 추가되고 m_length가 증가됨. 추가가 성공하면 1 그렇지 않으면 0을 리턴
/*
template <class T>
int List<T>::Add(T data) {
	if (IsFull()) return 0;  // if full, return 0
	m_Array[m_Length] = data;
	m_Length++;
	return 1;	// add success
}
*/

//?????[문제 3-2-A-i]: 위 코드를 참고하여 오름차순이 유지되도록 Add()함수를 수정한다. 
template <class T>
int List<T>::Add(T data) {
	//???
}


//  입력 : data의 primary key가 찾고자 항목의 primary key로 set됨
//	출력 : data의 primary key와 일치하는 항목을 찾으면 data에 해당 항목전체를 복사하고 그 항목의 index를 리턴한다. 
//		  찾지 못하면 -1을 리턴한다. 
/*
template <class T>
int List<T>::Retrieve(T& data)
{
	for (int i = 0; i < m_Length; i++)	{
		if (m_Array[i] == data) { // same primary
			data = m_Array[i];
			return i;	// copy the record and return.
		}
	}
	return -1;	// not found.
}
*/

//?????[문제 3-2-A-i]: 오름차순 리스트의 장점을 살릴 수 있도록 위 Retrieve 함수를 수정  
template <class T>
int List<T>::Retrieve(T& data)
{
	//???
	return 0;// 코드와 무관
}


//?????[문제 3-2-A-iv] 위의 수정된 Retrieve함수를 참조하여 찾은 항목 포인터를 리턴하는 RetrievePtr()을 구현
/*  입력 : data의 primary key가 찾고자 항목의 primary key로 set됨
	출력 : data의 primary key와 일치하는 항목을 찾으면 해당 항목의 pointer를 리턴하고 찾지 못하면 NULL을 리턴한다.
*/
template <class T>
T* List<T>::RetrievePtr(T& data)
{
	//???
}



//  입력 :	data의 primary key가 삭제하고자 하는 primary key로 set됨
//	출력 :	data의 primary key와 일치하는 항목을 찾으면 지우고 1을 리턴하고
//			찾지 못하면 0을 리턴한다.
/*
template <class T>
int List<T> ::Delete(T data) {
	int indx = Retrieve(data);
	if (indx==-1) return 0;
	else
	{
		m_Array[indx] = m_Array[m_Length - 1];
		m_Length--;
	}
	return 1;
}
*/


//?????[문제 3-2-A-i] : 위 delete 함수를 삭제후 순서가 유지되도록 수정
//?????[문제 3-2-A-ii] : [exception처리] try, through, catch를 이용하여 리스트가 empty이면 "List is Empty"를 
//                      삭제할 data가 존재하지 않으면 "Key not found in the List"를 출력하도록 처리. 
//                      std::exception을 이용한 derived class를 정의하여 하는 catch문으로 구현한다. 

template <class T>
int List<T> ::Delete(T data)
{
	return 0; // 코드와 무관
	//???
}

