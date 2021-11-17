#include<iostream>
using namespace std;
class parent
{

public:
int y;

void getdata()
{
cin>>y;
}
void display()
{
cout<<y;
}
};
cout<<y;
int main()
{
parent obj;
obj.getdata();
obj.display();

}
