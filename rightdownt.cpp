#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cin>>n;
for(i=1;i<=n;i++)
{
for(j=0;j<=n-i;j++)
{
cout<<"7";
}
for(i=1;i<=n;i++)
{
for(j=n+i;j<=n;j++)
{
cout<<"8";
}
cout<<"\n";
}
}
}

