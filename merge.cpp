#include<bits/stdc++.h>
using namespace std;

void merge(int left[],int right[],int arr[],int nl,int nr)
{
	int i=0,j=0,k=0;//pointers
	while(i<nl&&j<nr)
	{
		if(left[i]<right[j])
		{
			arr[k]=left[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=right[j];
			k++;
			j++;
		}
	}
	while(i<nl)
	{
		arr[k]=left[i];
		k++;
		i++;
	}
	while(j<nr)
	{
		arr[k]=right[j];
		k++;
		j++;
	}
}
void merge_s(int arr[],int n)
{
	if(n<2)
		return;
	int mid=n/2;
	int left[mid];
	int right[n-mid];
	for(int i=0;i<mid;i++)
	{
		left[i]=arr[i];
	}
	for(int i=mid;i<n;i++)
	{
		right[i-mid]=arr[i];
	}
	merge_s(left,mid);
	merge_s(right,n-mid);
	merge(left,right,arr,mid,n-mid);
	
}
int main()
{
	                                      
		 
 
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
 	cin>>arr[i];
 }
 merge_s(arr,n);
 for(int i=0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 
 }
