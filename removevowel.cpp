#include<iostream>
#include<string>
using namespace std;
int main()
{
int count=0;
string s;
getline(cin,s);
int len=s.length();
for(int i=0;i<len;i++)
{
if(s[i]=='a'|| s[i]=='e'|| s[i]=='o'|| s[i]=='i'|| s[i]=='u')
{
 for(int j=i;j<len;j++)
 {
 s[j]=s[j+1];
 }
 i--;
 len--;
}
}

cout<<s;
}
