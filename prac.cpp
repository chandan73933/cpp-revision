#include<bits/stdc++.h>
using namespace std;
class sum
{
public:
int x;
int y;
void getdata()
{
cin>>x>>y;
}
void add()
{
int z=x+y;
cout<<z<<endl;
}
};
class mul:public sum
{
public:
void muult()
{
int z=x*y;
cout<<z;
}
};
int main()
{
mul m;
m.getdata();
m.add();
m.muult();
}
