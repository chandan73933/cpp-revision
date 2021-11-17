
 #include<iostream>
using namespace std;
struct node
{
int data;
struct node *left;
struct node *right;
node(int x)
{
data=x;
left=right=NULL;
}
};
int insert(node *root,int x)
{
node *temp=new node(x);
node *curr=root;
node *par=NULL;
while(curr!=NULL)
{
par=curr;
if(curr->data>x)
{
curr=curr->left;
}
else if(curr->data<x)
{
curr=curr->right;
}
}
if(par==NULL)
{
return ;
}
else if(par->data>x)
{
par->left=temp;
}
else
{
par->right=temp;
}
}
void preorder(node *root)
{
if(root!=NULL)
{
cout<<(root->data)<<" ";
preorder(root->left);
preorder(root->right);
}
}
int main()
{
node *root=new node(50);
node *temp2=new node(40);
node *temp3=new node(60);
node *temp4=new node(30);
node *temp5=new node(70);
node *temp6=new node(45);
node *temp7=new node(55);
root->left=temp2;
root->right=temp3;
root->left->left=temp4;
root->right->right=temp5;
root->left->right=temp6;
root->right->left=temp7;
cout<<insert(root,2);
preorder(root);
}
