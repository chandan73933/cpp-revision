#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the value";
cin>>a>>b;

try
{
if(b!=0)
{
cout<<"result(a/b):-"<<a/b;;
}
else
throw(b);
}

catch(int i)
{
cout<<"got an exception";
}

}
