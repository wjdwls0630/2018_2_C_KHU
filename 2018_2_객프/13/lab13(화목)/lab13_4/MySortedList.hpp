#ifndef MySortedList_hpp
#define MySortedList_hpp

#include <iostream>
#include <string>
using namespace std;


#define MAXSIZE 20
#define ASCENDING 1
#define DESCENDING 0

template <typename T>
class SortedList {
private:
  T m_Array[MAXSIZE];  ///< list array.
  int m_Length;	///< number of elements in list.
  int m_CurPointer;	///< iterator pointer.
  int sortDirection;
public:
  SortedList();
  SortedList (const int &Direction);
  ~SortedList ();
  void SetSortDirection(const int &Direction);
  void MakeEmpty();
  int GetLength() const;
  bool IsFull() const;
  void ResetList();
  int GetNextItem(T& data) const ;
  T* GetNextItemPtr() const;
  int Add(const T& data);
};
//	*	default constructor.
template <typename T>SortedList<T>::SortedList(){
  // default : ascending order
  m_Length = 0;
  ResetList();
  sortDirection = ASCENDING;
}

template <typename T>SortedList<T>::SortedList(const int &Direction){
  m_Length = 0;
  ResetList();
  sortDirection = Direction;
  // ASCENDING(1): ascending order,  DESCENDING(0): descending order
}

//	destructor.
template <typename T>SortedList<T>::~SortedList (){}

// set the sorting direction
template <typename T>void SortedList<T>::SetSortDirection(const int &Direction){ this->sortDirection=Direction;}

// Make list empty.
template <typename T>void SortedList<T>::MakeEmpty(){ this->m_Length=0;}

//	Get a number of records in current list.
template <typename T>int SortedList<T>::GetLength() const{ return this->m_Length; }

// 	Check capacity of list is full.
// 	If full, return true. Otherwise return false.
template <typename T>bool SortedList<T>::IsFull() const{
  if (m_Length > MAXSIZE - 1)
    return true;
  else
    return false;
}

//	Initialize list iterator.
template <typename T>void SortedList<T>::ResetList() { m_CurPointer = -1; }

/* 	@brief	move current iterator pointer to the next item
 *  @pre	iterator pointer should be intialied
 *  @post	If new current pointer is out of bound, return -1.
 *			Otherwise, copy the current item to data and return current pointer.
 */
template <typename T>int SortedList<T>::GetNextItem(T& data) const{
  m_CurPointer++;
  if (m_CurPointer == MAXSIZE)	// retrun -1 when reach the end of list
    return -1;
  data = m_Array[m_CurPointer];	// return the current record
  return m_CurPointer;	// return the index of current record
}

/*	@brief	move current pointer to the next
 *	@pre	iterator pointer should be intialized
 *	@post	If new current pointer is out of bound, return NULL.
 *			Otherwise, return the pointer of the current item
 */
template <typename T>T* SortedList<T>::GetNextItemPtr() const{
  m_CurPointer++;	// list pointer
  if (m_CurPointer == m_Length)	// return NULL when reach the end of list
    return NULL;
  return &m_Array[m_CurPointer];	// return pointer of the current record
}

/*@brief	find 'data' to the list in the order defined by "sortDirection'
*	@pre	list should be initialized.
*	@post	added the new record into the list.
*	@param	data	new data.
*	@return	return 1 if this function works well, otherwise 0.
*/
template <typename T>int SortedList<T>::Add(const T &data){
  //	Initialize list iterator.
  this->ResetList();
  T Data_Compare;
  T target;
  int target_index;

  //@brief	find 'data' to the list in the order defined by "sortDirection'
  while (Data_Compare!=NULL) {
    Data_Compare=*(this->GetNextItemPtr());
    if (Data_Compare==data) {
      std::cout << "Data is already in List!" << '\n';
      return 0;
    }
  }
  //	Initialize list iterator.
  this->ResetList();
  if (this->sortDirection==ASCENDING) {
    target_index=this->GetNextItem(target);
    if (data<target) {
    }
  }

  this->GetNextItem(target);




}


/**
*	Sorted List based array.
*   It can be used for either ascending order or descending order depending of the parameter provided when it is created
*/
template <typename T>
class SortedList{
private:
	T m_Array[MAXSIZE];  ///< list array.
	int m_Length;	///< number of elements in list.
	int m_CurPointer;	///< iterator pointer.
	int sortDirection;

public:
	//	*	default constructor.
	SortedList(int Direction) 	{ // ASCENDING: ascending order,  DESCENDING: descending order
		m_Length = 0;
		ResetList();
		sortDirection = Direction;
	}

	SortedList() { // default : ascending order
		m_Length = 0;
		ResetList();
		sortDirection = ASCENDING;
	}

	//	destructor.
	~SortedList()	{}
	// set the sorting direction
	void SetSortDirection(int Direction) {
		sortDirection = Direction;
	}
	// Make list empty.
	void MakeEmpty()	{
		m_Length = 0;
	}

	//	Get a number of records in current list.
	int GetLength() 	{
		return m_Length;
	}

	// 	Check capacity of list is full.
	// 	If full, return true. Otherwise return false.
	bool IsFull() 	{
		if (m_Length > MAXSIZE - 1)
			return true;
		else
			return false;
	}

	//	Initialize list iterator.
	void ResetList() 	{
		m_CurPointer = -1;
	}

	/* 	@brief	move current iterator pointer to the next item
	 *  @pre	iterator pointer should be intialied
	 *  @post	If new current pointer is out of bound, return -1.
	 *			Otherwise, copy the current item to data and return current pointer.
	 */
	int GetNextItem(T& data)
	{
		m_CurPointer++;
		if (m_CurPointer == MAXSIZE)	// retrun -1 when reach the end of list
			return -1;
		data = m_Array[m_CurPointer];	// return the current record
		return m_CurPointer;	// return the index of current record
	}

	/*	@brief	move current pointer to the next
	 *	@pre	iterator pointer should be intialized
	 *	@post	If new current pointer is out of bound, return NULL.
	 *			Otherwise, return the pointer of the current item
	 */
	T* GetNextItemPtr()
	{
		m_CurPointer++;	// list pointer
		if (m_CurPointer == m_Length)	// return NULL when reach the end of list
			return NULL;
		return &m_Array[m_CurPointer];	// return pointer of the current record
	}

    /*	@brief	find 'data' to the list in the order defined by "sortDirection'
	*	@pre	list should be initialized.
	*	@post	added the new record into the list.
	*	@param	data	new data.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int Add(T data);
	/**
	*	@brief	Retrieve the record with the primary key defined in input parameter 'data'
	*	@pre	the primary key of data is defined
	*	@post	Return data filled with complete record information
	*           Return 1 for found, 0 for not found
	*/
	int Retrieve(T& data);

	/**
	*	@brief	Retrieve the record with the primary key defined in input parameter 'data' by using binary search
	*	@pre	the primary key of data is defined
	*	@post	Return the pointer of data  when found, NULL when not found
	*/
	T* RetrieveUsingBinarySearch(T item);

	/**
*	@brief	Find the input record and delete it from the list
*	@pre	data shoud contain the primary key of the record to be deleted
*	@post	Delete the record from the list
*	@param	data : data contain the primary key only
*	@return 1 for success, 0 for fail
*/
	int Delete(T data);

	/**
	*	@brief	find record with the primary key in 'data' and replace the existing record with 'data
	*	@pre	data should contain the complete information of the new record
	*	@post	the record in the list is updated with new record in 'data'
	*	@param
	*	@return	1 for success, 0 for fail
	*/
	int Replace(T data);



};



#endif /* MySortedList_hpp */
