#include<iostream>
using namespace std;
int main()
{
int fact=1;
int n,i;
cin>>n;
for(int i=2;i<=n;i++)
{
fact=fact*i;
cout<<fact<<" ";
}
}
