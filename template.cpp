#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
T c;
c=a+b;
return c;
}

int main()
{
int x=10,y=15,z;
float f1=10.5,f2=11.2,f3;
double d1=12,d2=14,d3;

z=add(x,y);
cout<<z<<endl;
f3=add(f1,f2);
cout<<f3<<endl;
d3=add(d1,d2);
cout<<d3;
}
