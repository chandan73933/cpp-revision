#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string x;
cin>>x;
v.push_back(x);
}
for(int i=v.size()-1;i>=0;i--)
{
cout<<v[i]<<" ";
}
}
