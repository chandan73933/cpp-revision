#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
int a,b;
cout<<"enter the value of a and b";
cin>>a>>b;

try
{
if(a!=0)
{
cout<<a/b;
}
else
{
throw(b);
}
}
catch(int i)
{
cout<<"exception caught";
}
}


