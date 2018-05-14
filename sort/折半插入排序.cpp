#include <iostream>

using namespace std;

void insert_sort(int *arr, const int length)
{
	int tmp;
	for (unsigned int i = 1; i < length; ++i)
	{
		tmp = arr[i];
		int low = 0, high = i - 1;
		int k;
		while (low <= high)
		{
			k = (low + high) / 2;
			if (tmp < arr[k])
			{
				high = k - 1;
			}
			else if(tmp > arr[k])
			{
				low = k + 1;
			}
			else
			{
				high = k;
				break;
			}
		}
		for (int j = i-1; j > high; --j)
		{
			arr[j+1] = arr[j];
		}
		arr[high+1] = tmp;
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
	insert_sort(arr, 8);
	arr_print(arr, 8);
	return 0;
}