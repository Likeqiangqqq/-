#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int i;
    int flag=0;
    int N;
    cin>>N;
    int a[100000]={0};
    a[0]=2;
    int count=0;
    for(n=3;n<=100000;n++)
    {
        flag=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                {
                    flag=1;
                    break;
                }
        }
        if(flag==0)
        {
           count++;
           a[count]=n;
        }
        while(count>N);
        break;

    }
  for(i=0;i<N;i++)
  {
      cout<<a[i]<<endl;
  }
    return 0;
}
