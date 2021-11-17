#include<iostream>
#include<string>
using namespace std;
int main()
{
int count=0;
int n;
cin>>n;
char s[n];
for(int i=0;i<n;i++)
{
cin>>s[i];
}/*
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(s[i]>s[j])
{
int temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	}
	}*/
	
for(int i=0;i<n;i++)
{
if(s[i]=='d')
{
count++;

}

if(count==2)
{
cout<<s[i];
}
}
}
