#include<bits/stdc++.h>
using namespace std;
class over
{
int x;
int y;
public:
void getdata();
void display();
void operator-();
};
void over::getdata()
{
cin>>x;
cin>>y;
}
void over::display()
{
cout<<"the value is:-"<<x<<endl;
cout<<"the value is:-"<<y<<endl;
}
void over::operator-()
{
x=-x;
y=-y;
}
int main()
{
over s;
s.getdata();
-s;
s.display();
}

