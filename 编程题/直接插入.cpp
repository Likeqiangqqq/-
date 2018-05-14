#include<stdio.h>
#include<iostream>
using namespace std;
const int N=7;
int R[N];
int  main()
{    for(int i=0;i<N;i++)
        {
            cin>>R[i];
        }
    int temp;
    int j;
for(int i=1;i<N;i++)
   {
    temp=R[i];
    j=i-1;
    while(j>=0&&temp<R[j])
       {
           R[j+1]=R[j];
           j--;
       }
   R[j+1]=temp;

     }
      for(int i=0;i<N;i++)
        {
            cout<<R[i]<<" ";
        }
        return 0;
 }

