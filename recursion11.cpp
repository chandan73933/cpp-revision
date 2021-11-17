#include<iostream>
using namespace std;
void space(int n)
{
if(n==0)
return;

cout<<" ";
space(n-1);
}
void print(int n)
{
if(n==0)
return ;

cout<<"*";
print(n-1);

}
void pattern(int n,int i)
{
if(n==0)
return;

pattern(n-1,i+1);
print(i);
cout<<"\n";
}
int main()
{
int n;
cin>>n;
pattern(n,1);

return 0;
}
