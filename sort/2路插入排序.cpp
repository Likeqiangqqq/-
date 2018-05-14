#include <iostream>

using namespace std;


//为什么const int length 无法指定数组大小？

//在两路的二分查找不同

void arr_print(const int *arr, int length, int first)
{
	for (unsigned int i = 0; i < length; ++i)
	{
		cout << arr[(i + first) % length] << "\t";
	}
	cout << endl;
}

void insert_sort(const int *arr, const int length)
{
	int tmp;
	int *new_arr = new int[length];
	int first = length, final = 1;
	new_arr[0] = arr[0];
	for (unsigned int i = 1; i < length; ++i)
	{
		tmp = arr[i];
		if (tmp >= new_arr[0])
		{
			int low = 0, high = final-1;
			int k;
			while (low <= high)
			{
				k = (low + high) / 2;
				if (tmp < new_arr[k])
				{
					high = k - 1;
				}
				else if (tmp > new_arr[k])
				{
					low = k + 1;
				}
				else
				{
					high = k;
					break;
				}
			}
			for (int j = final - 1; j > high; --j)
			{
				new_arr[j + 1] = new_arr[j];
			}
			new_arr[high + 1] = tmp;
			final++;
		}
		else
		{
			if (length == first )
			{
				new_arr[first - 1] = tmp;
			}
			else
			{
				int low = first, high = length - 1;
				int k;
				while (low <= high)
				{
					k = (low + high) / 2;
					if (tmp < new_arr[k])
					{
						high = k - 1;
					}
					else if (tmp > new_arr[k])
					{
						low = k + 1;
					}
					else
					{
						high = k;
						break;
					}
				}
				for (unsigned int j = first - 1; j < high; ++j)
				{
					new_arr[j] = new_arr[j+1];
				}
				new_arr[high] = tmp;
			}
			first--;
		}
	}
	arr_print(new_arr, 8 , first);
}

int main()
{
	int arr[8] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	insert_sort(arr, 8);
	return 0;
} 