#include<iostream>
using namespace std;
int main()
{
int i,j,k,n=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>n;
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
	if(a[i]==a[j])
	{
	 for(k=j;k<n;k++)
	 {
	 a[k]=a[k+1];
	 }
	 n--;
	 j--;
	 }
}
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
