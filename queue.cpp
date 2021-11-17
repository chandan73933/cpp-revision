#include<iostream>
using namespace std;
int queue[100];
int n=100;
int front =-1;
int rear=-1;
void insert(int val;)
{
//int val;
if(rear=n-1)
{
cout<<"overflow";
}
else
{
if(front=-1)
front =0;
queue[rear]=val;
}
}
void delete()
{
if(front==-1||front>rear)
{
cout<<"underflow";
}
else
{
front++;
}
int main()
{



}
