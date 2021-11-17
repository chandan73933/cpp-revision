#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}





for(i=0;i<n;i++)
{
if(a[i]==0)
break;
}
for(int j=i;j<n;j++)
{
a[j]=a[j+1];
a[n-1]=a[i];
}

for(int i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
}
}
