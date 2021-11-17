#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int n,x,a,b;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<int>v(arr,arr+n);
cin>>x;
v.erase(v.begin()+(x-1));
cin>>a>>b;
v.erase(v.begin()+(a-1),v.begin()+(b-1));
cout<<v.size()<<endl;
for(int x:v)
cout<<x<<" ";
}

