//********************************* stack USING ARRAY **********************************************
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class stack
{
	private:
		int arr[5];
		int top;
	
	public:
		stack()
		{
			top=-1; // this shows that stack is completely empty;
		}

// Creating push and pop for stack
void push(int num)
{
	if(top>=4)
	{
		cout<<"The stack is full************************"<<endl;
	}
	if(top<4)
	{
	top++;
	arr[top]=num;
	cout<<"Element successufully inserted"<<endl;
	}
}

int pop()
{
	if(top==-1)
	{
		cout<<"Stack is completely empty*********************"<<endl;
		return NULL;
	};
	cout<<"The deleted element is :"<<arr[top]<<" ";
	top--;
}

void display()
{
	cout<<"The elements of array are "<<endl;
	for(int i=top; i>=0; i-- )
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
		
}
};
main()
{
	stack stk;
	int ch;
	while(true)
	{
		cout<<"Select the option"<<endl<<"1. To push \n2. To pop \n3. To display\n ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:cout<<"Enter the element:";
			cin>>ch;
			stk.push(ch);
			break;
			
			case 2: 
			stk.pop();
			break;
			
			case 3:
			stk.display();
			
		}
	}
	
}

