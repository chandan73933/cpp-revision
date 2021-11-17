#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
string rev="chandan";
sort(rev.begin(), rev.end());
for(auto r:rev)
cout<<r;
}
