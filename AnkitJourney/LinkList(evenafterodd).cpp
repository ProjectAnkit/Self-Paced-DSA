#include<bits/stdc++.h>
using namespace std;

class node{
    private:
       int data;
       node* next;
    public:
       void createnode(int x);
       void print();
       void evenafterodd();
};

node *head;

void node::createnode(int x){
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;
    }
    else{
        node *temp1 = head;
        
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void node::print(){
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


void node::evenafterodd(){
    node *odd = head;
    node *evenstart = head->next;
    node *even = head->next;
    
    while(even!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = even->next;
        
        even->next = odd->next;
        even = odd->next;
    }
    
    odd->next = evenstart;
}


int main(){
    node list;
    list.createnode(1);
    list.createnode(2);
    list.createnode(3);
    list.createnode(4);
    list.createnode(5);
    list.createnode(6);
    list.createnode(7);
    
    
    list.print();
    cout<<endl;
    
    list.evenafterodd();
    
    list.print();
    
    return 0;
}
