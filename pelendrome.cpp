#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int temp=n;
int rev=0;
int count=0;
while(temp!=0)
{
int l=temp%10;
rev=((rev*10)+l);
temp=temp/10;
count++;
}
cout<<rev<<" "<<count;
}
