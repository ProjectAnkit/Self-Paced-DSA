#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,number;
	cin>>n;
	string name;
	
	unordered_map<string,int>marks;
	
	for(int i=0;i<n;i++)
	{
		cin>>name>>number;
		marks[name] = number;
	}
	
	cout<<"Enter the name :";
	cin>>name;
	if(marks.find(name)==marks.end())
	{
		cout<<"Not found";
	}
	else
	{
	   cout<<"marks of "<<name<<" :"<<marks[name]<<endl;
	}
}
