#include<iostream>
using namespace std;

struct Node
{
int data;
Node *next;
Node(int x)
{
data=x;
next=NULL;
}
};
void display(Node *head)
{
Node *curr=head;
while(curr!=NULL)
{
cout<<(curr->data)<<" ";
curr=curr->next;
}
}
int main()
{
Node *head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
display(head);
return 0;
}
