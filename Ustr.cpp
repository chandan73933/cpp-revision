#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
string s="abcdefghijklmnopqrstuvwxyz";
for(int i=0;i<s.length();i++)
{
	for(int j=1;j<s.length();j++)
	{
	int temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
cout<<s;
}
