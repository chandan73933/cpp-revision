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
cout<<curr->data<<" ";
curr=curr->next;
}
}
node *search(node *head)
{
node *temp=new node(11);
temp->next=head;
return temp;


}
int main()
{
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(330);
display(head);
cout<<search(head);
}
