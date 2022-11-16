#include <iostream>
using namespace std;

class Stack
{
	private:
	    int data;
	    Stack *next;
	public:
	    void push(int x);
	    void print();
};

Stack *head;

void Stack::push(int x)
{
    Stack *temp = new Stack();
    temp->data = x;
    if(head == NULL)
    {
    	head = temp;
    	temp->next = NULL;
    }
    else 
    {
    	temp->next = head;
    	head = temp;
    }
}

void Stack::print()
{
	Stack *temp = head;
	while (temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main() {
	Stack stack;
    int c,data;
    while(1)
    {
	cout<<"\n1. Push "<<endl;
	cout<<"2. Print "<<endl;
	cout<<"3. Exit "<<endl;
	cin>>c;
	switch(c)
	{
		case 1:{
			cout<<" Enter the data you want to push :";
			cin>>data;
			stack.push(data);
		}
		break;
		case 2: {
			stack.print();
			cout<<"\n";
		}
		break;
		case 3: {
			exit(1);
		}
		break;
		default : {
			cout<<"Error";
		}
		break;
	}
    }
	return 0;
}
