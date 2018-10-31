#include <iostream>
using namespace std;

void SelectionSort(int* list, int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (*(list + j) < *(list + min)) {
				min = j;
			}
		}
		swap(*(list + i), *(list + min));
	}
}

void BubbleSort(int* list, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (*(list + j) >*(list + j + 1)) {
				swap(*(list + j),*(list + j + 1));
			}
		}
	}
}

void InsertionSort(int* list, int n)
{
	int target;
	for (int i = 1; i < n; i++) {
		target = *(list + i);
		int j;
		for (j = i - 1; j >= 0 && target < *(list + j); j--) {
			*(list + j + 1) = *(list + j);
		}
		*(list + j + 1) = target;
	}
}

int SequentialSearch(int* list, int length, int target) {
	for (int i = 0; i < length; i++) {
		if (*(list + i) == target) {
			return i;
		}
	}
	return -1;
}

int BinarySearch(int* list, int length, int target) {
	int left = 0;
	int right = length - 1;
	int mid;

	while (left <= right) {
		mid = left + (left + right) / 2;
		if (*(list + mid) == target) {
			return mid;
		}
		else if (*(list + mid) < target) {
			left = mid + 1;
		}
		else if (*(list + mid) > target) {
			right = mid - 1;
		}
	}
	return -1;

}

int main() {
	int list1[9] = { 6, 5, 1, 7, 0, 4, 3, 8, 2 };

	SelectionSort(list1, 9);
	for (int i = 0; i < 9; i++)
		cout << list1[i] << ' ';
	cout << endl;

	int list2[9] = { 6, 5, 1, 7, 0, 4, 3, 8, 2 };
	BubbleSort(list2, 9);
	for (int i = 0; i < 9; i++)
		cout << list2[i] << ' ';
	cout << endl;

	int list3[9] = { 6, 5, 1, 7, 0, 4, 3, 8, 2 };
	InsertionSort(list3, 9);
	for (int i = 0; i <9; i++)
		cout << list3[i] << ' ';
	cout << endl;

	int list4[9] = { 6, 5, 1, 7, 0, 4, 3, 8, 2 };
	cout << SequentialSearch(list4, 9, 0) << endl;

	int list5[9] = { 6, 5, 1, 7, 0, 4, 3, 8, 2 };
	SelectionSort(list5, 9);
	cout << BinarySearch(list5, 9, 0) << endl;

	return 0;
}