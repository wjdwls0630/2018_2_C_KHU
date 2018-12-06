#pragma once
#pragma once

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 100

// Generic list class

//?? [�׸� 1-1] template list class "List" �� �����϶�. 
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
	T *m_Array;		// �ڷ���� ������ �迭�� ������
	int curIndx;    // ���� �ε���
	int m_Length;	// ����Ʈ�� ����� �ڷ��׸� ��
	int maxSize;    // �迭�� �ִ� ũ��
};


//?? [�׸� 1-2] Add(T data) �Լ��� �����϶�. 
/*	�Է� : �߰��� �׸��� data �����.
��� : list�� data�� �߰��ǰ� m_length�� ������. �߰��� �����ϸ� 1 �׷��� ������ 0�� ����
*/


//?? [�׸� 1-3] Retrieve(T& dat) �Լ��� �����϶�.
/*  �Է� : data�� primary key�� ã���� �׸��� primary key�� set��
��� : data�� primary key�� ��ġ�ϴ� �׸��� ã���� data�� �ش� �׸���ü�� �����ϰ� �� �׸��� index�� �����Ѵ�.
ã�� ���ϸ� -1�� �����Ѵ�.
*/


//?? [�׸� 1-4] Delete(T data)�� �����϶�. 
/*  �Է� :	data�� primary key�� �����ϰ��� �ϴ� primary key�� set��
��� :	data�� primary key�� ��ġ�ϴ� �׸��� ã���� ����� 1�� �����ϰ�
ã�� ���ϸ� 0�� �����Ѵ�.
*/

/*  �Է� : data�� primary key�� ã���� �׸��� primary key�� set��
	��� : data�� primary key�� ��ġ�ϴ� �׸��� ã���� data�� �ش� �׸���ü�� �����ϰ� �� �׸��� index�� �����Ѵ�. 
		  ã�� ���ϸ� -1�� �����Ѵ�. 
*/
