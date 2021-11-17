#include<iostream>
using namespace std;
int main()
{
int temp,i,j;
int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
j=i-1;
i=0;
while(i<j)
{
 while(i<j)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 
 i++;

 j--;
 }
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
