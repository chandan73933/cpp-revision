#include<bits/stdc++.h>
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
void del(node *&head)
{
node *temp=head;
head=head->next;
delete temp;


}
void display(node *head)
{
node *curr=head;
while(curr!=NULL)
{
cout<<curr->data<<" ";
curr=curr->next;
}
}
int main()
{
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
//display(head);
del(head);
display(head);
}
