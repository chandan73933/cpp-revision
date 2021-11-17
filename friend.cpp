#include<iostream>
using namespace std;
class parent
{
private:
int x;
int y;
public:
void getdata()
{
cin>>x>>y;
}
void display()
{
cout<<x<<y;
}

friend void calc(parent);

};
void calc(parent obj)
{
int sum;
sum=obj.x*obj.y;
cout<<sum;
}

int main()
{
parent obj;
obj.getdata();
obj.display();
calc(obj);
}
