#include<iostream>
using namespace std;
int queue[5],n=5,rear=-1,front=-1;
void enque(int val)
{
	if(rear>=n-1)
	{
		cout<<"queue is full"<<endl;	
	}	
	else
	{
		rear++;
		queue[rear]=val;
		if(front==-1)
		{
			front=0;
		}
	}
}
void deque()
{
	if(front==-1 && rear==-1)
	{
		cout<<"queue is empty"<<endl;
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		cout<<"deleted element is "<<queue[front]<<endl;
		front++;
	}
}
void display()
{
	cout<<"queue elements are"<<endl;
	for(int i=rear;i>=front;i--)
	{
		cout<<queue[i]<<" ";
	}	
}
int main()
{
	int ch,val;
	cout<<"1-->enque"<<endl<<"2-->deque"<<endl<<"3-->display"<<endl<<"4-->exit"<<endl;
	while(1)
	{
		cout<<"Enter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to insert"<<endl;
				cin>>val;
				enque(val);
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"Exit";
				exit(0);
		}
	}
}
