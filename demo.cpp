#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{

cin>>a[i];
}
for(int j=i;j>=0;j--)
{
a[j+1]=a[j];
cout<<a[j]<<"  ";
}
}

