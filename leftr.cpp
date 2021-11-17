#include<iostream>
using namespace std;
int main()
{
int n,temp;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"how many times you want to rotate";
int r;
cin>>r;
for(int i=1;i<r;i++)
{
temp=a[0];
for(int i=0;i<n;i++)
{
a[i]=a[i+1];
a[n]=temp;
}
}
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
