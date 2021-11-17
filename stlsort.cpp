#include<bits/stdc++.h>
using namespace std;
int main()
{
int i;
int arr[]={23,45,12,34,22,67};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<n<<endl;
sort(arr, arr+n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}

if(binary_search(arr,arr+n,22))
cout<<"ok";
else
cout<<"not ok";
}
