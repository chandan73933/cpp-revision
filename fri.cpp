#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
v.push_back(x);
}
for(int i=0;i<v.size();i++)
{
sort(v.rbegin(),v.rend());
}
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}
}
