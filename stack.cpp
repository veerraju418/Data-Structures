//stack
#include<iostream>
using namespace std;
int top=-1;
int stack[5],n=5;
void push(int val)
{
	if(top>=n-1)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		top++;
		stack[top]=val;	
	}
}
void pop()
{
	if(top<=-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<"deleted element is"<<stack[top]<<endl;
		top--;
	}
}
void display()
{
	cout<<"stack elements are"<<endl;
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<" ";
	}
}
int main()
{
	int ch,val;
	cout<<"1-->push"<<endl<<"2-->pop"<<endl<<"3-->display"<<endl<<"4-->exit"<<endl;
	do
	{
		cout<<"enter choice";
		cin>>ch;
		
		switch(ch)
		{
			case 1 :
				cout<<"Enter element to push";
				cin>>val;
				push(val);
				break;
				
			case 2 :	
				pop();
				break;
				
			case 3 :
				display();
				break;
				
			case 4 :
				cout<<"Exit";
				break;
				
			default:
				cout<<"Invalid choice";
		}
	}while(ch!=4);
}
