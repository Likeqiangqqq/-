#include<stdio.h>
#include<iostream>
using namespace std;
char str[1000];
int main()
{   int N,M=0;
    cin>>N;
    for(int i=0;i<N-1;i++)
        cin>>str[i];

    for(int i=0;i<N-1;i++)
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'&&str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
      M++;

    cout<<M;
return 0;
}
