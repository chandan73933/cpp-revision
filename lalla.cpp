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
void insert(node *&head)
{
	node *temp=new node(1005);
	node *curr=head;
	while(curr->next!=NULL)
	{ 	
		curr->next=temp;
		temp->next=curr->next;
		//curr->next=temp;
	}
}
void dispaly(node *head)
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
node *head=new node(102);
head->next=new node(103);
head->next->next=new node(104);
insert(head);
dispaly(head);
}
