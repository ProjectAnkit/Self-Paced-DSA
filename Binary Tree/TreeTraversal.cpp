#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
       int val;
       Node *left;
       Node *right;
       void pretraversal(Node *root);
       
       Node(int data)
       {
           val = data;
           left = NULL;
           right = NULL;
       }
};

void Node::pretraversal(Node *root)
    {
    if(root==NULL)
     {
        return;
     }
    
    cout<<root->val<<" ";
    pretraversal(root->left);
    pretraversal(root->right);
    }


int main(){
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
   
   root->pretraversal(root);
}
