#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
//int count=0;
for(int i=0;i<s.length()-1;i++)
{
if((s[i]=='a')&&(s[i]=='b')&&(s[i]=='c'))
{
cout<<"3";
}
else if((s[i]=='a')||(s[i]=='b')||(s[i]=='c'))
{
cout<<"1";
}
}
//cout<<count;
}
