#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
int n=s.length()-1;
for(int i=0;i<=n;i++)
{
	for(int k=1;k<=i;k++)
	{
	cout<<" ";
       }
       for(int j=n-i;j>=0;j--)
       {
       cout<<s[j];
       }


cout<<"\n";
}
}
