#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
   for(int j=2;j<=i;j++)
   {
   cout<<" ";
   }
   for(int j=0;j<=n-i;j++)
   {
   cout<<"#";
   }
   for(int j=n-i;j>0;j--)
   {
   cout<<"#";
   }
   
   cout<<"\n";
}
}
