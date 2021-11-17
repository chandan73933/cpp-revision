#include<iostream>
using namespace std;
void sort(int a[],char b[],int n)
{
pair<int ,char>pa[5];
for(int i=0;i<n;i++)
{
pa[i].first=a[i];
pa[i].second=b[i];
}
sort(pa, pa+5);
for(int i=0;i<n;i++)
cout<<pa[i].second<<" ";
}
int main()
{
int n=5;
int a[]={3,2,1};
char b[]={"c","d","i"};
sort(a,b,n);
}
