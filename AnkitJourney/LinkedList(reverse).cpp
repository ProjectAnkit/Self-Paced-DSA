#include <bits/stdc++.h>
using namespace std;

class node{
    private:
        int data;
        node *next;
    public:
        void create(int x);
        void print();
        void reverse();
};

node *head;

void node::create(int x){
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


void node::print(){
    node *temp = head;
    
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void node::reverse(){
    node *temp = head;
    node *temp1 = head->next;
    node *temp2;
    
    while(temp1!=NULL){
        temp2 = temp1->next;
        temp1->next = temp;
        temp = temp1;
        temp1 = temp2;
    }
    head->next = NULL;
    head = temp;
}


int main(){
    node list;
    list.create(1);
    list.create(2);
    list.create(3);
    list.create(4);
    list.print();
    
    list.reverse();
    
    list.print();
    
    return 0;
}
