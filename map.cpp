#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
map<int,string> mp;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
string s;
cin>>s;
mp.insert({x,s});
}
for(auto i=mp.begin();i!=mp.end();i++)
{
cout<<i->first<<" "<<i->second<<endl;
}
}
