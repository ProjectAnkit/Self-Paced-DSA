#include <bits/stdc++.h>

using namespace std;

class Node{
	private:
	    int data;
	    Node *next;
	public:
	    void insert(int x);
	    void print();
	    void getvalue(int position);
};

Node *head;

void Node::insert(int x){
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

void Node::print(){
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
		
	}
}

void Node::getvalue(int position){
	Node *temp = head;
	int count = 1;
	while(count<position)
	{
		temp = temp->next;
		count++;
	}
	cout<<"\n"<<temp->data;
}

int main()
{
	Node list;
	int position;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);
	list.print();
	cout<<"Enter position to get value :";
	cin>>position;
	list.getvalue(position);
	return 0;
}
