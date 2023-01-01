#include <bits/stdc++.h>

using namespace std;

class Node{
    private:
       int data;
       Node *next;
       Node *prev;

    public:
       void insert(int x);
       void insert1(int y);
       int Size(Node*head,Node*head1);
       void createlist();
       void createlist1();
       void mergelist(Node*head,Node*head1);
       void print();
       void print1();
};

       Node *head=NULL;
       Node *head1=NULL;
       

void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;
        head->prev = NULL;
    }
    else
    {
        Node *temp1 = head;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}

void Node::insert1(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
    if(head1==NULL)
    {
        head1 = temp;
        head1->prev = NULL;
    }
    else
    {
        Node *temp1 = head1;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}

int Node::Size(Node*head,Node*head1){
    int count = 0;
    Node *temp = head;
    Node *temp1 = head1;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
     while(temp1!=NULL)
    {
        temp1 = temp1->next;
        count++;
    }
    return count;
}

void Node::mergelist(Node*head,Node*head1){
    
    Node *head2=NULL;
    
    Node *temp = head;
    Node *temp1 = head1;
    Node *temp3 = head2;
    
    int count = Size(head,head1);
    
    while(count>0)
    {
        if(temp->data<temp1->data)
        {
            if(head2==NULL)
            {
                temp = temp->next;
                head2 = temp->prev;
                --count;
            }
            else
            {
            while(temp3->next!=NULL)
            {
                temp3 = temp3->next;
            }
            temp3->next = temp;
            temp = temp->next;
            --count;
            }
        }
        else if(temp->data>temp1->data)
        {
            if(head2==NULL)
            {
                temp1 = temp1->next;
                head2 = temp1->prev;
                --count;
            }
            else
            {
            while(temp3->next!=NULL)
            {
                temp3 = temp3->next;
            }
            temp3->next = temp1;
            temp1 = temp1->next;
            --count;
            }
        }
    }
    
    *head = *head2;
}

void Node::print(){
    
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
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
    cout<<"\nEnter the size of list 2:";
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



int main()
{
    Node list;
    list.createlist();
    list.createlist1();
    list.mergelist(head,head1);
    cout<<"\n"<<"Final Sorted List is:";
    list.print();
   return 0; 
}

