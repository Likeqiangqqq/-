#include <iostream>

using namespace std;

void simple_select_sort(int *arr, int length)
{
	for (unsigned int i = 0; i < length - 1; i++)
	{
		for (unsigned int j = i + 1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
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
	simple_select_sort(arr, 8);
	arr_print(arr, 8);
	return 0;
}