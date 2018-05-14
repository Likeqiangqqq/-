#include<iostream>
using namespace std;
int main()
{
    int a[1000]={0};
    int n,i;
    int index,value;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>index>>value;
            a[index]=a[index]+value;
        }
        for(i=0;i<1000;i++){
            if(a[i]!=0)
            {
                cout<<i<<" "<<a[i]<<endl;
            }
        }
    }
    return 0;
}
