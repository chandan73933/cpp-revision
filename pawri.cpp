#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
string p="pawri";
//string q="party";
int temp;
getline(cin,s);

s.replace(s.find(p),5,"party");

cout<<s;
}
