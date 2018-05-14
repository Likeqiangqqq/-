#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
    int a[130]={0};
    for(int i=0;i<str.length();i++)
    {
        a[str[i]]++;
    }
    int mi=a[str[0]];
    for(int i=1;i<str.length();++i)
        {
            if (a[str[i]]<mi)
            {
                mi=a[str[i]];
            }
        }
    for(int i=0;i<str.length();i++)
    {
        if(a[str[i]]>mi)
        cout<<str[i];
    }
    cout<<endl;
    }
    return 0;
}
