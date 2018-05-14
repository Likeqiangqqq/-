#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   	std::string str1,str2;
	getline(cin, str1);
	str2=str1;
	const char *p1 =  str1.c_str();
	const char *p2 =  str2.c_str();
	int d[100][100]={0};
	int max_len=0;
	int num=0;
	for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++)
        {
            if(p1[i]==p2[j])
            {
                if(i>0&&j>0)
                {
                   d[i][j]=d[i-1][j-1]+1;
                }
                else d[i][j]=1;
            }
            if(max_len<d[i][j]){
                    max_len=d[i][j];
                }
        }
    }
  cout<<max_len;
    return 0;

}
