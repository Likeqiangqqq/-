#include <iostream>

using namespace std;

void heap_adjust(int *arr, int s, int length)
{
	int index = s;
	while (2 * s + 1 < length)
	{
		if (((2 * s + 2) < length) && (arr[2 * s + 1] > arr[2 * s + 2]))
		{
			//swap(arr[2 * s + 2], arr[2 * s + 1]);
			index = 2 * s + 2;
		}
		else
		{
			index = 2 * s + 1;
		}
		if (arr[s] > arr[index])
		{
			swap(arr[s], arr[index]);
		}
		s = index;
	}
}

void heap_sort(int *arr, int length)
{
	for (int i = (length - 1) / 2; i >= 0; --i)
	{
		heap_adjust(arr, i, length);
	}
	for (int i = length - 1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		heap_adjust(arr, 0, i);
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
	heap_sort(arr, 8);
	arr_print(arr, 8);
	return 0;
}