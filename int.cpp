#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
int n;
cin>>n;
char alpha='a';
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
cout<<alpha++;
}
cout<<"\n";
}

}
	
