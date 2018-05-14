#include <iostream>
#include <list>
using namespace std;

void arr_print(list<int> &list_arr)
{
	for (list<int>::iterator it = list_arr.begin(); it != list_arr.end(); it++)
	{
		cout << *it << '\t';
	}
	cout << endl;
}

void list_insert_sort(int *arr, const int length)
{
	list<int> list_arr;
	list_arr.push_back(arr[0]);
	for (unsigned int i = 1; i < length; ++i)
	{
		list<int>::iterator it;
		for (it = list_arr.begin(); it != list_arr.end(); it++)
		{
			if (*it > arr[i])
			{
				list_arr.insert(it, arr[i]);
				break;
			}
		}
		if (it == list_arr.end())
		{
			list_arr.push_back(arr[i]);
		}
	}
	arr_print(list_arr);
}

int main()
{
	int arr[8] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	list_insert_sort(arr, 8);
	return 0;
}