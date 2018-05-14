#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m;
    int a[10]={0};
    cin>>n;
    while(n){
        m=n%10;
        if(a[m]!=1){
            a[m]=1;
            cout<<m;
        }
        n=n/10;
    }
    return 0;
}
