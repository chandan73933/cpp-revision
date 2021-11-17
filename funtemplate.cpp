#include<bits/stdc++.h>
using namespace std;
template<typename T>
T arrmax(arr[],int n)
{
T res=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>res)
res=arr[i];
}
return res;
}
int main()
{
	int arr1[]={10,45,30,23,45};
	cout<<arrmax(arr1,5);
	float arr2[]={10.4,56.6,34.5,23.6};
	cout<<arrmax<(arr2,4);
	return 0;
}
