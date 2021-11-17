#include<iostream>
#include<algorithm>
#include<string>
int main()
{
string s="chandan";
int low=0;
int high=s.length-1();
while(low<=high)
{
	swap(s[low],s.[high]);
	low++;
	high--;
}
cout<<s;
}
