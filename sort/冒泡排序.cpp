#include <iostream>

using namespace std;

void bubble_sort(int (&arr)[8],int length)
{
	cout << sizeof(arr) << endl;
	for (int i = 0; i < length - 1; i++)
	{
		for (int  j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
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
	bubble_sort(arr, 8);
	arr_print(arr, 8);
	return 0;
}