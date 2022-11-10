#include <iostream>
using namespace std;

class Node{
	private:
	    int data;
	    Node *next;
	public:
	    void insert(int x);
	    void print();
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

void Node::print(){
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int main() {
	Node list;
	int n,x;
	cout<<" Enter the size of list :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		list.insert(x);
	}
	list.print();
	return 0;
}
