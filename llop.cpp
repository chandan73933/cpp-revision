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
void insert(node *&head,int pos,int x)
{
node *temp=new node(x);
if(pos==1)
{
temp->next=head;
head=temp;
}
break;
node *curr=head;
for(int i=1;i<pos-1&&curr!=NULL;i++)
{
curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;
}
int main()
{
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);

insert(head,1,333);
display(head);
}
