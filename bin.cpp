#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n/10>=1&&n%10==1||n/10==0&&n%10==0)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}
