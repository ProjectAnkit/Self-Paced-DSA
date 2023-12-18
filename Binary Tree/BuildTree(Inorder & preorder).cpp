#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    
    Node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
    
};

    
 int searchNode(int inorder[],int start,int end,int node)
    {
    for(int i=start;i<=end;i++)
     {
        if(inorder[i]==node)
        {
            return i;
        }
     }
    return -1;
    }


Node* buildtree(int preorder[],int inorder[],int start,int end){
    
    static int indx = 0;
    if(start>end)
    {
        return NULL;
    }
    int curr = preorder[indx];
    Node *root = new Node(curr);
    int pos = searchNode(inorder,start,end,curr);
    indx++;
    root->left = buildtree(preorder,inorder,start,pos-1);
    root->right = buildtree(preorder,inorder,pos+1, end);
    
    return root;
    }



 void Inordertraversal(Node *root)
    {
    if(root==NULL)
     {
        return;
     }
    
    Inordertraversal(root->left);
    cout<<root->val<<" ";
    Inordertraversal(root->right);
    }



int main(){

    int preorder[] = {1, 2, 4, 5, 3, 6};
    int inorder[] = {4, 2, 5, 1, 6, 3};
    Node *root = buildtree(preorder,inorder,0,5);
    Inordertraversal(root);
    
    return 0;
}
