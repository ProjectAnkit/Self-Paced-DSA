#include<bits/stdc++.h>
using namespace std;

class node{
    private:
        int data;
        node *next;
    public:
        void createnode(int x);
        void print();
        void checkloop();
};

node* head;

void node::createnode(int x){
    node *temp = new node();
    temp->data = x;
    if(head==NULL)
    {
        head = temp;
        head->next = head;
    }
    else{
        node *temp1 = head;
        
        while(temp1->next!=head)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->next = head;
    }
}



void node::print(){
    node *temp = head;
    int count = 0;
        do {
            cout << temp->data << " ";
            temp = temp->next;
            count++;
        } while (count<10);
}



void node::checkloop(){
    
    node *slow = head;
    node *fast = head->next;
    
    while(slow->next!=NULL && fast->next!=NULL ){
        slow = slow->next;
        fast = fast->next->next;
        
         if(slow->data == fast->data)
        {
           cout<<"loop exist";
           break;
        }
    }
     
        if(slow->data != fast->data)
        {
           cout<<"loop not exist";
        }
}



int main(){
    node list;
    list.createnode(1);
    list.createnode(2);
    list.createnode(3);
    
    list.print();
    list.checkloop();
    return 0;
    
}
