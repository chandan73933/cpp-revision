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
void inorder(node *root)
{
if(root!=NULL)
{
//inorder(root->left);
cout<<(root->data);
inorder(root->right);
inorder(root->left);
}
}
int main()
{
node *root=new node(20);
node *temp1=new node(10);
node *temp2=new node(30);
root->left=temp1;
root->right=temp2;
inorder(root);
}
