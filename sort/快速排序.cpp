#include <iostream>

using namespace std;


int partition(int *arr, int low, int high)
{
	int pivotkey = arr[low];
	while (high > low)
	{
		while (high > low && arr[high] >= pivotkey)
		{
			high--;
		}
		arr[low] = arr[high];
		while (high > low && arr[low] <= pivotkey)
		{
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = pivotkey;
	return low;
}

void quick_sort(int *arr, int low, int high)
{
	if (low < high)
	{
		int pivotkey = partition(arr, low, high);
		quick_sort(arr, low, pivotkey - 1);
		quick_sort(arr, pivotkey + 1, high);
	}
}


void arr_print(const int *arr, int length)
{
	for (unsigned int i = 0; i < length; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


int main()
{
	int arr[8] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	quick_sort(arr, 0, 7);
	arr_print(arr, 8);
	return 0;
}