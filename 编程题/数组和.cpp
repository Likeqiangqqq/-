#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{    int m=0;
    double n=0;
    cin>>n>>m;
    double *a=new double[m];
    double sum=n;
for(int i=1;i<m;i++)
{
    a[1]=sqrt(n);
    a[i+1]=sqrt(a[i]);
    sum=sum+a[i];
}
 printf("%0.2f",sum);
 return 0;
}
