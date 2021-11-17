#include<iostream>
using namespace std;
int main()
{
int a[]={12,22,13,44,15};
int i,j;
int n=sizeof(a)/sizeof(a[0]);
cout<<n<<endl;
j=a[0]-1;
i=0;
while(i<j)
{
int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	i++;
	j--;
	}
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
}

