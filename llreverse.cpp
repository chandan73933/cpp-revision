#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};
void display(node *head)
{
node *curr=head;
while(curr!=NULL)
{
cout<<curr->data<<" " ;
curr=curr->next;
}
}

void reverse(node *&head)
{
node *curr=head;
node *prev=NULL;
while(curr!=NULL)
{
curr->next=prev;
prev=curr;
curr=curr->next;
}
//return prev;
}
int main()
{
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);

//reverse(head);
display(head);
}
