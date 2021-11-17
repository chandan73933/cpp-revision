#include<bits/stdc++.h>
using namespace std;
class overf
{
	int x,y,z;
public:
	void getdata();
	void display();
	void operator--(void);
};
void overf::getdata()
{
	cout<<"enter x:-"<<endl;
	cin>>x;
	cout<<"enter y:-"<<endl;
	cin>>y;
	cout<<"enter z:-"<<endl;
	cin>>z;
}
void overf::display()
{
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
}
void overf::operator--(void)
{
	x=--x;
	y=--y;
	z=--z;
}
int main()
{
	                                     
 overf s;
 s.getdata();
 //s.display();
 --s;
s.display();
}
