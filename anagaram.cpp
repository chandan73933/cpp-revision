#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
string rev="chandan";
string rev1="andanhk";
if(rev.length()!=rev1.length())
{
cout<<"not a ana"<<endl;
}
sort(rev.begin(), rev.end());
sort(rev1.begin(),rev1.end());
cout<<rev<<endl;
cout<<rev1<<endl;
if(rev==rev1)
{
cout<<"ana";
}
else
{
cout<<"not ana"<<endl;
}
}

