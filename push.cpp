#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
stack<int> v;
for(int i=0;i<5;i++)
{
int x;
cin>>x;
v.push(x);
}
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}
}
