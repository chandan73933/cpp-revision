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
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
a[j]=a[j+1];
}
}
}
}
for(int i=0;i<n-i;i++)
{
cout<<a[i]<<" ";
}
}
