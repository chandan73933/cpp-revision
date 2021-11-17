#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}

int cap;
cin>>cap;
if(n==cap)
return n;
int pos;
cin>>pos;
int index=pos-1;
for(int i=n-1;i>=index;i--)
a[i+1]=a[i];
a[index]=101;
n= n+1;
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}

}
