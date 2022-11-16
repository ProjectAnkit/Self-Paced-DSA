#include <bits/stdc++.h>
#define MAX 6

using namespace std;

class Stack{
	private:
	    int top = -1;
	    int stack_arr[MAX];
	public:
	    void push(int data);
	    int pop();
	    void print();
	    int size();
};

void Stack::push(int data){
	if(top == MAX-1)
	{
		cout<<"warning : STACK OVERFLOW !";
		return;
	}
	top = top+1;
	stack_arr[top] = data;
}

int Stack::pop(){
	int value;
	if(top == -1)
	{
		cout<<"warning : STACK UNDERFLOW !";
		return 0;
	}
	value = stack_arr[top];
	top = top-1;
	return value;
}

void Stack::print(){
	for(int i=top;i>=0;--i)
	{
		cout<<stack_arr[i]<<endl;
	}
}

int Stack::size(){
	int sizearr;
	sizearr = top+1;
	return sizearr;
}

int main()
{
	Stack stack;
	int pop1,pop2,size;
	cout<<"Stack after pushing operation :"<<endl;
	stack.push(5);
	stack.push(8);
	stack.push(3);
	stack.push(9);
	stack.push(1);
	stack.push(2);
	stack.print();
	cout<<"Stack after popping operation :"<<endl;
	pop1 = stack.pop();
	pop2 = stack.pop();
	stack.print();
	cout<<"\n"<<pop1<<" & "<<pop2<<" are popped out of Stack .\n";
	size = stack.size();
	cout<<"\n Size of the Stack remains: "<<size;
	return 0;
}
