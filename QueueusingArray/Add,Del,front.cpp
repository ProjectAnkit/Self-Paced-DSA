#include <bits/stdc++.h>
#define MAX 5
using namespace std;

class Queue{
	private:
	    int count = 0;
	    int front = -1;
	    int rear = -1;
	    int arr_q[MAX];
	public:
	    void insert(int data);
	    void deletion();
	    void first();
	    void print();
};

void Queue::insert(int data)
{
	if(rear == MAX-1)
	{
		cout<<"warning : QUEUE IS FULL !\n";
	}
	else
	{
		rear = rear + 1;
		arr_q[rear] = data;
	}
}

void Queue::deletion()
{
	if(rear == -1 )
	{
		cout<<"warning : QUEUE IS EMPTY !\n";
	}
	else
	{
		for(int i=0;i<=rear;i++)
		{
			arr_q[i] = arr_q[i+1];
		}
		count++;
	}
}

void Queue::first()
{
	if(rear > -1)
	{
		front++;
		cout<<"1st Element in Queue :"<<arr_q[front];
	}
	else
	{
		cout<<"\nNO ELEMENT IN QUEUE\n";
	}
}

void Queue::print()
{
	for(int i=0;i<=(rear-count);i++)
	{
		cout<<arr_q[i]<<" ";
	}
}

int main() {
	Queue object;
	int c,data;
	while(1)
	{
		cout<<"\n1. ADD"<<endl;
		cout<<"2. REMOVE"<<endl;
		cout<<"3. FRONT"<<endl;
		cout<<"4. PRINT"<<endl;
		cout<<"5. EXIT"<<endl;
		cout<<"Enter your choice :";
		cin>>c;
		switch(c)
		{
			case 1: {
				cout<<"Enter your element :";
				cin>>data;
				object.insert(data);
			}
			break;
			case 2: {
				object.deletion();
				cout<<"Front element is removed !\n";
			}
			break;
			case 3: {
				object.first();
			}
			break;
			case 4: {
			    cout<<"Your Queue is :\n";
				object.print();
			}
			break;
			case 5: {
				exit(1);
			}
			break;
			default: {
				cout<<"ERROR";
			}
		}
		
	}
	return 0;
}
