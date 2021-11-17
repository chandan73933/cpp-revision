#include<iostream>
using namespace std;
class tiger
{
public:
int x;
int y;
void getdata();
};

class lion : public tiger
{
public:
void putdata();
};

class fox : virtual public tiger
{
public:
void putdata();
void shootdata();
};

void tiger:: getdata()
{
cin>>x;
cin>>y;
}
void lion:: putdata()
{
cout<<x+y;
}
void fox:: shootdata()
{
cout<<x*y;
}

int main()
{
fox l;
l.getdata();
l.putdata();
l.shootdata();
}
