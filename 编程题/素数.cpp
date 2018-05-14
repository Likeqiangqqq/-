#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int a[1000]={0};
int n=100000;
bool prime(int x)
{
    int y;
    for(y=2;y<=x;y++)
    {
      if(x%y==0)
      break;
    }
    if(y<x)
        return 0;
    else if(y=x)
        return 1;

}
int main()
{
    int N;
    cin>>N;
    a[0]=2;
    int count=0;
    for(int i=3;i<=n;i++)
       {
        if(prime(i))
        {  count++;
         a[count]=i;
        }

        if(count>N)
            break;
        }
    for(int i=0;i<N;i++)
        cout<<a[i]<<' ';
    return 0;
}
