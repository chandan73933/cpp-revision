#include<iostream>
using namespace std;
class A
{
public:
void print(int x)
{
cout<<"base";
}
void print(double x)
{
cout<<"derived";
}

};

int main()
{
A s;
s.print(23.4);
}
