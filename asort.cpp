#include <iostream>
using namespace std;
int main()
{
        int i,j,k,len;
        cin>>len;
        int a[len];
        for(i=0;i<len;i++)
        {
                   cin>>a[i];
         }
        for(i=0;i<len;i++)
        {
                for(j=i+1;j<len;j++)
                {
                        if(a[i]==a[j])
                        {
                          for(k=j;k<len;k++)
                          {
                           a[k]=a[k+1];
                          }
                           len--;
                           j--;
                        }
                }
          }
          for(i=0;i<len;i++)
          {
            cout<<a[i]<<" ";
          }
 	return 0;
}

