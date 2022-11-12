#include <bits/stdc++.h>
using namespace std;

class Node
{
	private:
	    int data;
	    Node *next;
	public:
	    void insert(int x);
	    void print();
	    void deletion(int x);
};

Node *head;

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
	Node *temp2 = head;
	while(temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp;
	}
}

void Node::print()
{
	Node *temp = head;
	while (temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void Node::deletion(int d)
{
	Node *temp = head;
	int count = 2;
	int count1 = 1;
	if(d==1)
	{
		head = temp->next;
	}
	else
	{
	while(count<d)
	{
		temp = temp->next;
		count++;
	}
	Node *temp1 = head;
    while(count1<d)
	{
		temp1 = temp1->next;
		count1++;
	}
	temp->next = temp1->next;
	}
}

int main() {
	Node list;
	int n,x,d;
	cout<<"Enter the length of list :";
	cin>>n;
	cout<<"Enter the elements :";
	for(int i=0;i<n;i++)
	{
		cin>>x;
		list.insert(x);
	}
	cout<<"\nNow list is :"<<endl;
    list.print();
    cout<<"\n Enter the deleting position :"<<endl;
    cin>>d;
    list.deletion(d);
    cout<<"\nAfter deletion :"<<endl;
    list.print();
	return 0;
}
