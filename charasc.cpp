#include<iostream>
using namespace std;
int main()
{
char name[20];
for(int i=0;i<10;i++)
{
cin>>name[i];
}
for(int i=0;i<10-1;i++)
{
for(int j=i+1;j<10;j++)
{
if(name[i]>name[j])
{
int temp=name[i];
name[i]=name[j];
name[j]=temp;
}
}
}
for(int i=0;i<10;i++)
{
cout<<name[i];
}
}
