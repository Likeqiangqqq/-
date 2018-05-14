#include<iostream>
using namespace std;
int main()
{
int n,m=0;
cin>>n;
while(n)
{
    if(n%2==1)
     {
      m++;
     }
      n=n/2;
}
cout<<m;
}
