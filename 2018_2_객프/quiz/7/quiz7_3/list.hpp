#pragma once

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 3

// Generic list class
template <typename T>
class List{
public:

	List(int size=MAXSIZE) { // constructor
		m_Length = 0;
		maxSize = size;
		m_Array = new T[maxSize];
	}

	~List() { delete [] this->m_Array;}  //	destructor.

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
	void ResetList() { curIndx = -1; } // ����Ʈ ��ĵ�� ���� curIndx�� �ʱ�ȭ �Ѵ�.

	// ���� �׸��� data�� �����Ѵ�. �Լ� ���� ������ ���� �׸��� ������ 1�� ������ 0 �����Ѵ�.
	int GetNextItem(T& data) {
		curIndx++;
		if (curIndx < m_Length) { data = m_Array[curIndx]; return 1; }
		else return 0;
	}
	int Add(T data);
	int Retrieve(T& data);
	int Delete(T data);

private:
	T *m_Array;		// �ڷ����� ������ �迭�� ������
	int curIndx;    // ���� �ε���
	int m_Length;	// ����Ʈ�� ������ �ڷ��׸� ��
	int maxSize;    // �迭�� �ִ� ũ��
};

template<typename T>int List<T>::Add(T data){
	if (this->IsFull()==1) {
		std::cout << "\t리스트에 더 이상 추가할 수 없습니다." << '\n';
		return 0;
	}else {
		if (this->Retrieve(data)==1) {
			std::cout << "\t중복된 데이터 존재" << '\n';
			return 0;
		}else{
			this->ResetList();
			T target;
			while (this->GetNextItem(target)!=0) {
				if (data<target) {
					for (int i = this->GetLength()-1; i >= this->curIndx; i--) {
						this->m_Array[i+1]=this->m_Array[i];
					}
					this->m_Array[this->curIndx]=data;
					this->m_Length++;
					return 1;
				}
			}
			this->m_Array[this->GetLength()]=data;
			this->m_Length++;
			return 1;
		}
	}
}

template<typename T>int List<T>::Retrieve(T& data){
	this->ResetList();
	T target;
	while (this->GetNextItem(target)!=0) {
		if (target==data) {
			data=target;
			return 1;
		}
	}
	std::cout << "\t해당 정보가 없습니다" << '\n';
	return 0;
}
template<typename T>int List<T>::Delete(T data){
	if (this->GetLength()==0) {
		std::cout << "리스트가 비었습니다" << '\n';
		return 0;
	} else{
		this->ResetList();
		if (this->Retrieve(data)==1) {
			for (int j = this->curIndx; j < this->m_Length-1; j++) {
				this->m_Array[j]=this->m_Array[j+1];
			}
			this->m_Array[this->m_Length-1]=0;
			this->m_Length--;
			return 1;
		}else {
			std::cout << "\t해당 정보가 없습니다" << '\n';
			return 0;
		}
	}
}
