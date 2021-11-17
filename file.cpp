#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
class file
{
int roll_no;
string s;
float marks;
public:
void getdata();
void putdata();

};
void file::getdata()
{
cout<<"enter the number:-";
cin>>roll_no;
cout<<"enter name";
cin>>s;
cout<<"enter marks";
cin>>marks;
}

void file::putdata()
{
cout<<"roll is"<<roll_no<<endl;
cout<<"name is"<<s;

cout<<"marks is"<<marks<<endl;
}
int main()
{
file s1;
fstream f;
f.open("studen.txt",ios::out);
s1.getdata();
f.write((char*)&s1,sizeof(s1));
f.close();

f.open("studen.txt",ios::in);
f.read((char*)&s1,sizeof(s1));
s1.putdata();
f.close();
return 0;
}
