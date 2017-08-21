//********************************* QUEUE USING ARRAY **********************************************
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class queue
{
	private:
		int arr[5];
		int front, rear;
	
	public:
		queue()
		{
			front=-1; // position of the first value in the queue
			rear=-1; //position of the last value in the queue
		}
	void insert(int num)
	{
		if(rear>4)
		{
			cout<<"THe queue is full \n";
			return;
		}
			rear++;
			arr[rear]=num;
			
		if(front==-1)
		{
			front =0; /// assigning the first position to front;
		}
	}
	
	void del()
	{
		if(front==-1)
		{
			cout<<"The queue is empty \n";
		}
		cout<<"The deleted element is"<<arr[front]<<endl;
		
		if(front==rear)
		{
			front=rear=-1;
		}
		else 
		front++;
	}
	
	void display()
	{
		if(front==-1)
		{
			cout<<"The queue is empty \n";
		}
		for(int i=rear; i>=front; i--)
		{
			cout<<arr[i]<<" ";
		}
	}
};
main()
{	
	int ch;
	queue q;
	
	while(true)
	{
	cout<<"Select The option \n1. To insert \n2. To delete \n3. To display \n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"Enter the element\n";
			cin>>ch;
			q.insert(ch);
			break;
			
		case 2:
			q.del();
			break;
			
		case 3:
			q.display();
	}
	}
}
