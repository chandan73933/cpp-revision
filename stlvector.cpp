 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 map<int,int> mp;
 mp.insert({10,200});
 //mp[5]=[100];
 mp.insert({20,200});
 for(auto i=mp.find(10);i<mp.size();i++)
 {
 cout<<i->second;
 }
 return 0;
 
 }
