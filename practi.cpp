#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *left;
node *right;
node(int x)
{
data=x;
left=right=NULL;
}
};
  void preorder(node *root)
  {
  if(root!=NULL)
  {
  
  preorder(root->left);
  //cout<<(root->data)<<" ";
  preorder(root->right);
  cout<<(root->data)<<" ";
  }
  }
  int main()
  {
  node *root=new node(10);
  node *temp1=new node(5);
  node *temp2=new node(25);
  node *temp3=new node(3);
  node *temp4=new node(45);
  root->left=temp1;
  root->right=temp2;
  root->left->left=temp3;
  root->right->right=temp4;
  preorder(root);
  }
  
