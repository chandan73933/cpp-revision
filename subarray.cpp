#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s;
getline(cin,s);
int len=s.length();
sort(s.begin(),s.end());

cout<<s;
}
