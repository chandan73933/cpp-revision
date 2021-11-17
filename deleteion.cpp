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


cout<<"enter the value you want"<<"\n";
int x;
cin>>x;


for(i=0;i<n;i++)
{
if(a[i]==x)
break;
}
for(int j=i;j<n-1;j++)
{
a[j]=a[j+1];
}

for(int i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
}
}
