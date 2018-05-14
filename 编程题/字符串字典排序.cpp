#include<iostream>
#include<string>
using namespace std;
bool compare(string a,string b)
{
    return a<b;
}
int main()
{
    int num;
    while(cin>>num)
    {
        getchar();
        string* s=new string[num];
        for(int i=0;i<num;i++)
            getline(cin,s[i]);
        sort(s,s+num,compare);
        for(int j=0;j<num;j++)
            cout<<s[j]<<endl;
    }
    return 0;
}
