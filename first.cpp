#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n+1;j++)
	{
	if((i==0&&j%3!=0 )||(i==1&&j%3==0)||(i-j==2)||(i+j==8))
	{
	cout<<"*";
	}
	else
	{
	cout<<" ";
	}

}
cout<<"\n";
}
}
