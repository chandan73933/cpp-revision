#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n-i;j++)
	{
	cout<<"*";
	}
	for(int k=2;k<=i;k++)
	{
	cout<<" ";
	}
	for(int h=2;h<=i;h++)
	{
	cout<<" ";
	}
	for(int h=1;h<=n-i;h++)
	{
	cout<<"*";
	}
	cout<<"\n";
}
}
