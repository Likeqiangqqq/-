#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
    char a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
		if( (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')&& (a[i+1] == 'a' || a[i+1] == 'e' || a[i+1] == 'i' || a[i+1] == 'o' || a[i+1] == 'u'))
			count++;
	cout << count << endl;

	return 0;
}
