#include <bits/stdc++.h>

using namespace std;

class Node{
    private:
       int data;
       Node *next;
    public:
       void insert(int x);
       void insert1(int y);
       void createlist();
       void createlist1();
       void mergelist(Node *head,Node *head1);
       void print();
       void print1();
};

Node *head;
Node *head1;

void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void Node::insert1(int y)
{
    Node *temp = new Node();
    temp->data = y;
    temp->next = NULL;
    
    if(head1==NULL)
    {
        head1 = temp;
    }
    else
    {
        Node *temp1 = head1;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}


void Node::print(){
    Node *temp1 = head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}

void Node::print1(){
    Node *temp1 = head1;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}

void Node::createlist(){
    
    int data;
    int s;
    cout<<"Enter the size of list 1:";
    cin>>s;
    
    for(int i=0;i<s;i++)
    {
        cout<<"Enter the "<<i+1<<"nth element :";
        cin>>data;
        insert(data);
    }
    
    cout<<"Your List is : ";
    print();
}

void Node::createlist1(){
    
    int data;
    int s;
    cout<<"\nEnter the size of list 1:";
    cin>>s;
    
    for(int i=0;i<s;i++)
    {
        cout<<"Enter the "<<i+1<<"nth element :";
        cin>>data;
        insert1(data);
    }
    
    cout<<"Your List is : ";
    print1();
}

void Node::mergelist(Node *head,Node *head1)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head1;
}

int main()
{
    Node list;
    list.createlist();
    list.createlist1();
    list.mergelist(head,head1);
    cout<<"\n"<<"Final List is :";
    list.print();
   return 0; 
}
