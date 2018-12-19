#pragma once

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 100


//?????[���� 3-2-A-ii] exception class ����  

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
	void ResetList() { curIndx = -1; } // ����Ʈ ��ĵ�� ���� curIndx�� �ʱ�ȭ �Ѵ�. 

	// ���� �׸��� data�� �����Ѵ�. �Լ� ���� ������ ���� �׸��� ������ 1�� ������ 0 �����Ѵ�. 
	int GetNextItem(T& data) {
		curIndx++;
		if (curIndx < m_Length) { data = m_Array[curIndx]; return 1; }
		else return 0;
	}
	//?????[���� 3-2-A-iii] GentNextItem�� �����͸� �����ϴ� �Լ��� �ϼ�
	// ����Ʈ�� ����ų� �� �����Ͱ� ���� �����ϸ� NULL�� �׷��� ������ ���� �׸��� �����͸� �����Ѵ�. 
	T *GetNextItemPtr() {
		//???	
	}

	//?????[���� 3-2-A-i] 
	int Add(T data); // ������������ �߰�
	//?????[���� 3-2-A-i]
	int Retrieve(T& data);  // ������������ ���ĵ� ����Ʈ���� data�� primary key�� ��ġ�ϴ� �׸��� ã�Ƽ� �����Ͽ� ����
	//?????[���� 3-2-A-iv] // ������������ ���ĵ� ����Ʈ���� data�� primary key�� ��ġ�ϴ� �׸��� ã�Ƽ� �����͸� ����
	T* RetrievePtr(T& data);
	//?????[���� 3-2-A-i]   , //?????[���� 3-2-A-ii] exceptionó��
	int Delete(T data); // ���������� �����ǵ��� ����


private:
	T *m_Array;		// �ڷ���� ������ �迭�� ������
	int curIndx;    // ���� �ε���
	int m_Length;	// ����Ʈ�� ����� �ڷ��׸� ��
	int maxSize;    // �迭�� �ִ� ũ��
};


//	�Է� : �߰��� �׸��� data �����.
//	��� : list�� data�� �߰��ǰ� m_length�� ������. �߰��� �����ϸ� 1 �׷��� ������ 0�� ����
/*
template <class T>
int List<T>::Add(T data) {
	if (IsFull()) return 0;  // if full, return 0
	m_Array[m_Length] = data;
	m_Length++;
	return 1;	// add success
}
*/

//?????[���� 3-2-A-i]: �� �ڵ带 �����Ͽ� ���������� �����ǵ��� Add()�Լ��� �����Ѵ�. 
template <class T>
int List<T>::Add(T data) {
	//???
}


//  �Է� : data�� primary key�� ã���� �׸��� primary key�� set��
//	��� : data�� primary key�� ��ġ�ϴ� �׸��� ã���� data�� �ش� �׸���ü�� �����ϰ� �� �׸��� index�� �����Ѵ�. 
//		  ã�� ���ϸ� -1�� �����Ѵ�. 
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

//?????[���� 3-2-A-i]: �������� ����Ʈ�� ������ �츱 �� �ֵ��� �� Retrieve �Լ��� ����  
template <class T>
int List<T>::Retrieve(T& data)
{
	//???
	return 0;// �ڵ�� ����
}


//?????[���� 3-2-A-iv] ���� ������ Retrieve�Լ��� �����Ͽ� ã�� �׸� �����͸� �����ϴ� RetrievePtr()�� ����
/*  �Է� : data�� primary key�� ã���� �׸��� primary key�� set��
	��� : data�� primary key�� ��ġ�ϴ� �׸��� ã���� �ش� �׸��� pointer�� �����ϰ� ã�� ���ϸ� NULL�� �����Ѵ�.
*/
template <class T>
T* List<T>::RetrievePtr(T& data)
{
	//???
}



//  �Է� :	data�� primary key�� �����ϰ��� �ϴ� primary key�� set��
//	��� :	data�� primary key�� ��ġ�ϴ� �׸��� ã���� ����� 1�� �����ϰ�
//			ã�� ���ϸ� 0�� �����Ѵ�.
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


//?????[���� 3-2-A-i] : �� delete �Լ��� ������ ������ �����ǵ��� ����
//?????[���� 3-2-A-ii] : [exceptionó��] try, through, catch�� �̿��Ͽ� ����Ʈ�� empty�̸� "List is Empty"�� 
//                      ������ data�� �������� ������ "Key not found in the List"�� ����ϵ��� ó��. 
//                      std::exception�� �̿��� derived class�� �����Ͽ� �ϴ� catch������ �����Ѵ�. 

template <class T>
int List<T> ::Delete(T data)
{
	return 0; // �ڵ�� ����
	//???
}

