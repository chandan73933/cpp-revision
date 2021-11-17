 #include<iostream>
 #include<map>
 using namespace std;
 int main()
 {
 multimap<int ,int>mp;
 mp.insert({10,200});
 mp.insert({10,300});
 mp.insert({30,400});
 cout<<mp.count(10);
 mp.erase(10);
 //cout<<mp.first;
 }
 
