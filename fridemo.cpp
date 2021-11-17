#include<iostream>
using namespace std;
class fri
{
int x;
int y;
public:
void getdata()
{
cin>>x;
cin>>y;
}
void putdata()
{
cout<<x<<y;
}
friend void calc(fri);
};
void calc(fri obj)
{
int sum;
sum=obj.x+obj.y;
cout<<sum;
}
int main() 
{
fri obj;
obj.getdata();
obj.putdata();
calc(obj);
}
