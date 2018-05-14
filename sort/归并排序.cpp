#include <iostream>

using namespace std;

//�����������ڴ�һ������һ���鲢ʱ�������õ���һ���鲢�õ������飬��Դ����û�иı䣬������Դ����鲢��������һ���Ĺ鲢���������Ҫ�ı�Դ���顣
void merge(int *arr, int *new_arr, int first, int middle, int last)
{
	int index, m = middle, i = first;
	for (index = first; first < m && middle <= last; ++index)
	{
		if (arr[first] > arr[middle])
		{
			new_arr[index] = arr[middle++];
		}
		else
		{
			new_arr[index] = arr[first++];
		}
	}
	while (first < m)
	{
		new_arr[index++] = arr[first++];
	}
	while (middle <= last)
	{
		new_arr[index++] = arr[middle++];
	}
	for (; i <= last; i++)
	{
		arr[i] = new_arr[i];
	}
}


void msort(int *arr, int *new_arr, int first, int last)
{
	if (first != last)
	{
		int middle = (first + last) / 2;
		msort(arr, new_arr, first, middle);
		msort(arr, new_arr, middle + 1, last);
		merge(arr, new_arr, first, middle + 1, last);
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
	int *new_arr = new int[8];
	msort(arr, new_arr, 0, 7);
	arr_print(new_arr, 8);
	return 0;
}

