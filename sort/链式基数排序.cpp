#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>
using namespace std;

void collect(string *str, int length, list<string> *l)
{
	int k = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (l[i].size() == 0)
		{
			continue;
		}
		else
		{
			for (list<string>::iterator it = l[i].begin(); it != l[i].end(); it++)
			{
				str[k++] = *it;
			}
		}
	}
}

void distribute(string *str, int length, int i)
{
	list<string> *l = new list<string>[10];
	for (int j = 0; j < length; ++j)
	{
		if (str[j].length() <= i)
		{
			l[0].push_back(str[j]);
		}
		else
		{
			int c = str[j][str[j].length() - 1 - i] - 48;
			l[c].push_back(str[j]);
		}
	}
	collect(str, 10, l);
}

void radix_sort(int *arr, int length)
{
	int max = 0;
	string str[10] = { "" };
	stringstream ss;
	for (int i = 0; i < length; i++)
	{
		ss << arr[i];
		str[i] = ss.str();
		if (max < arr[i])
		{
			max = arr[i];
		}
		ss.str("");
	}
	ss << max;
	max = ss.str().length();

	for (int i = 0; i < max; i++)
	{
		distribute(str, 10, i);
	}
	for (int i = 0; i < length; i++)
	{
		sscanf(str[i].c_str(), "%d", &arr[i]);
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
	int arr[10] = { 278,109,63,930,589,184,505,269,8,83 };
	radix_sort(arr, 10);
	arr_print(arr, 10);
	return 0;
}