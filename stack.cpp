#include<bits/stdc++.h>
using namespace std;
int stck[100];int top=-1;int n=5;
void push(int x)
{
if(top==n-1)
{
cout<<"overflow";
}
else
{
top++;
stck[top]=x;
}
}
void display()
{
for(int i=0;i<top;i++)
{
cout<<stck[i]<<" ";
}
}
int main()
{
for(int i=0;i<n;i++)
{int x;
cin>>x;
push(x);
}
display();
}

