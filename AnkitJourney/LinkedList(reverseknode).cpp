#include <bits/stdc++.h>
using namespace std;

class node{
    private:
        int data;
        node *next;
       
    public:
        void create(int x,node* &head);
        void print(node* &head);
        node* reverseknode(int k,node* &head);
};

 node *head=NULL;

void node::create(int x,node* &head){
    node *temp = new node();
    temp->data = x;
    
    if(head==NULL)
    {
        head = temp;
    }
    
    else{
       temp->next = head;
       head = temp;
    }
}


void node::print(node* &head){
    node *temp = head;
    
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

node* node::reverseknode(int k,node* &current){
    
    node *temp = NULL;
    node *temp1 = current;
    node *temp2;
    int count = 0;
    
    while(temp1!=NULL && count<k){
        temp2 = temp1->next;
        temp1->next = temp;
        temp = temp1;
        temp1 = temp2;
        count++;
    }
 
  if(temp2!=NULL)
  {
      current->next=reverseknode(k,temp2);
  }
  return temp;
}


int main(){
    node list;
    list.create(1,head);
    list.create(2,head);
    list.create(3,head);
    list.create(4,head);
    list.print(head);
    node* newhead = list.reverseknode(2,head);
    cout<<endl;
    list.print(newhead);
    return 0;
}
