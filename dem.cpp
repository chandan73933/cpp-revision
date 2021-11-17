#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int temp=n;
int res=0;
while(temp!=0)
{
	int l=temp%10;
	res=(res)+l;
	temp=temp/10;
}
int tem=res;
        int pel=0;
        while(tem!=0)
        {
          int l=tem%10;
          pel=(pel*10)+l;
          tem=tem/10;
        }
    
        if(res==pel)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
}
