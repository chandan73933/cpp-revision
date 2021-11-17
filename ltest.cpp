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
    int x;
    int hed;
    cin>>hed;
    node *head=new node(hed);
    string val;
    cout<<"enter the choice";
    cin>>val;
    if(val=="y")
    {
    node *temp=new node(33);
    head->next=temp;
    //node *tempnode=new node(33);
    }
    //head->next=tempnode;
/*for(int i = 1; i < 5; i++) {
    node *next = new node(67); 
    cout<<"enter the value of "<<i<<" node : "<<endl;
    cin>>x;
    next->data = x;
    tempnode->next = next;
    tempnode = next;
} 
*/
display(head);
}
   
