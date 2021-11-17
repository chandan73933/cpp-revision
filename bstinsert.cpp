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

node *insert(node * root, int data) {
        if(root==NULL)
        {
            return new node(data);
        }
        else if(root->data < data)
        {
           root->right=insert(root->right, data);
        }
        else if (root->data > data) {
            root->left=insert(root->left, data);
        }
        return root;
    }
int main()
{
node *root=new node(50);
node *temp1=new node(30);
node *temp2=new node(70);
node *temp3=new node(10);
node *temp4=new node(40);
node *temp5=new node(60);
node *temp6=new node(80);

root->left=temp1;
root->right=temp2;
root->left->left=temp3;
root->left->right=temp4;
root->right->right=temp6;
root->right->left=temp5;
cout<<insert(root,50);
}
