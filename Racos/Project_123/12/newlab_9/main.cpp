//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define SOL 0
//#if SOL==0
//class Stack
//{
//private:
//	int* p_list;
//	int size;
//	int MAX_SIZE;
//public:
//	Stack(int s = 1000)
//		: size(0), MAX_SIZE(s)
//	{
//		p_list = new int[MAX_SIZE];
//	}
//	~Stack()
//	{
//		delete p_list;
//	}
//	int find_index(int item) // 지역변수 i를 만들어 탐색했다.
//	{
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			if (item == p_list[i])
//				break;
//		}
//		if (i == size)
//			return -1;
//		else
//			return i;
//	}
//	void push(int item)
//	{
//		if (size >= MAX_SIZE)
//			cout << "Error: out of memory\n";
//		else
//		{
//			int i;
//			for (i = 0; i < size; i++)
//			{
//				if (item == p_list[i])
//					break;
//			}
//			if (i == size)
//				p_list[size++] = item;
//		}
//	}
//	int pop()
//	{
//		if (size == 0)
//		{
//			cout << "Error: No item exists in the list\n";
//			return -1;
//		}
//		else
//			return p_list[size--];
//	}
//	void print()const
//	{
//		cout << "Items in the list: ";
//		for (int i = 0; i < size; i++)
//			cout << p_list[i] << ",";
//		cout << endl;
//	}
//	int get_size() { return size; }
//	int get_item(int index) // 지역변수 i를 만들어 탐색했다.
//	{
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			if (i == index)
//				break;
//		}
//		if (i == size)
//			return -1;
//		else
//			return p_list[i];
//	}
//};
//#else
//class Stack
//{
//private:
//	vector<int> list; // vector빼곤 다 필요없엉
//public:
//	Stack() {}
//	~Stack() {}
//	// find나 binary_search는 값이 있냐 없냐를 체크하는 것이라 순서까지 알아야되는 이 문제에서는 그닥....
//	int find_index(int item)
//	{
//		unsigned int i;
//		for (i = 0; i < list.size(); i++)
//		{
//			if (list[i] == item)
//				break;
//		}
//		if (i == list.size())
//			return -1;
//		else
//			return list[i];
//	}
//	void push(int item)
//	{
//		list.push_back(item);
//		list.resize(distance(list.begin(),unique(list.begin(), list.end())));
//		// resize(distance(시작,unique(시작,끝)))는 중복제거+벡터크기 재조정을 모두 한다.
//	}
//	int pop()
//	{
//		int target = list[list.size() - 1];
//		list.erase(list.begin()+list.size()-1); // 저장하고 맨 마지막 원소를 erase를 이용해 제거.
//		return target;
//	}
//	void print()const
//	{
//		cout << "Items in the list: ";
//		for (unsigned int i = 0; i < list.size(); i++)
//			cout << list[i] << ",";
//		cout << endl;
//	}
//	unsigned int get_size() { return list.size(); }
//	int get_item(int index)
//	{
//		unsigned int i;
//		for (i = 0; i < list.size(); i++)
//		{
//			if (i == index)
//				break;
//		}
//		if (i == list.size())
//			return -1;
//		else
//			return i;
//	}
//};
//#endif
//int main()
//{
//	Stack s1;
//	s1.push(4);    //아이템 추가
//	s1.push(4);
//	s1.push(2);
//	s1.push(2);
//	s1.push(1);
//	s1.push(5);
//	s1.print();
//
//	s1.pop();   //아이템 제거
//	s1.print();
//	cout << "Size of Stack: " << s1.get_size() << endl; //현재 크기
//
//	int index = 2, item_val = 1;
//	cout << "The value at " << index << " th index: " << s1.get_item(index) << endl;
//	cout << item_val << " is located at " << s1.find_index(item_val) << endl;
//
//	index = 5, item_val = 100;
//	cout << "The value at " << index << " th index: " << s1.get_item(index) << endl;
//	cout << item_val << " is located at " << s1.find_index(item_val) << endl;
//
//	/*Stack s1(2);
//	s1.push(1);
//	s1.push(2);
//	s1.push(3);
//	s1.print();
//
//	s1.pop();
//	s1.pop();
//	s1.pop();
//	s1.pop();
//	s1.print();*/
//
//	return 0;
//}
#include <iostream>
using namespace std;

class Stack {
public:
	Stack(int);
	~Stack();
	int find_index(int);
	void push(int);
	int pop();
	void print() const;
	int get_size();
	int get_item(int);
private:
	int* p_list;//정수형 변수들을 가지는 배열
	int size;//현재 저장된 변수들의 개수
	int MAX_SIZE;//최대로 저장할 수 있는 p_list의 크기
};
int Stack::get_item(int index)
{
	if (index < size)
		return p_list[index];
	else
		return -1;
}
int Stack::get_size()
{
	return size;
}
void Stack::push(int item)
{
	if (find_index(item) == -1)
		p_list[size++] = item;
}
int Stack::pop()
{
	if (size == 0)
	{
		cout << "No item" << endl;
		return -1;
	}
	else
		return p_list[size--];
}
void Stack::print()const
{
	cout << "Items in the list: ";
	for (int i = 0; i < size; i++)
		cout << p_list[i] << ",";
	cout << endl;
}
Stack::Stack(int Max_Size = 1000)
	: size(0), MAX_SIZE(Max_Size)
{
	p_list = new int[MAX_SIZE];
}
Stack::~Stack()
{
	delete p_list;
}
int Stack::find_index(int item)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (item == p_list[i])
			return i;
	}
	return -1;
}
//do not modify below
int main()
{
	Stack s1;
	s1.push(4);    //아이템 추가
	s1.push(4);
	s1.push(2);
	s1.push(2);
	s1.push(1);
	s1.push(5);
	s1.print();

	s1.pop();   //아이템 제거
	s1.print();
	cout << "Size of Stack: " << s1.get_size() << endl; //현재 크기

	int index = 2, item_val = 1;
	cout << "The value at " << index << " th index: " << s1.get_item(index) << endl;
	cout << item_val << " is located at " << s1.find_index(item_val) << endl;

	index = 5, item_val = 100;
	cout << "The value at " << index << " th index: " << s1.get_item(index) << endl;
	cout << item_val << " is located at " << s1.find_index(item_val) << endl;

	return 0;
}