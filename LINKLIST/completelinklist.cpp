#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* nextadd;
}node;

node *n, *m, *head=NULL, *temp, *temp1, *temp2,*prev, *current;
int item;

void insert()
{	cout<<"Enter the data\n";
	cin>>item;
	cout<<"Item Inserted"<<endl;
	n=(node*)malloc(sizeof(node));
	n->data=item;
	n->nextadd=NULL;
	
	if(head==NULL)
	{
		head=n;
	}
	else
	{
		m->nextadd=n;
	}
	m=n;
}

void display()
{	temp=head;
	
	cout<<"\nYour List is : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->nextadd;
	}
	cout<<endl;
}

/*void insertatend()
{
	cout<<"Enter the data\n";
	cin>>item;
	cout<<endl;
	n=(node*)malloc(sizeof(node));
	n->data=item;
	n->nextadd=NULL;
	m->nextadd=n;
	m=n;
}*/

void insertatbeg()
{
	cout<<"enter the element\n";
	cin>>item;
	n=(node*)malloc(sizeof(node));
	n->data=item;
	n->nextadd=head;
	head=n;
}


void insertinbetween()
{	int pos;
	cout<<"ENter the position\n";
	cin>>pos;
	temp=head;
	while(--pos)
	{
		temp1=temp;
		temp=temp->nextadd;
	}
	cout<<"Enter the data\n";
	cin>>item;
	cout<<"Item Inserted"<<endl;
	n=(node*)malloc(sizeof(node));
	n->data=item;
	n->nextadd=temp;
	temp1->nextadd=n;
}

void deleteatbeg()
{   
	temp=head;
	temp=temp->nextadd;
	head=temp;
	cout<<"Item Deleted\n";
}

void deletefromend()
{
	temp=head;
	while(temp->nextadd!=NULL)
	{	
		prev=temp;
		temp=temp->nextadd;
	}
	prev->nextadd=NULL;
	m=prev;
	cout<<"Item Deleted\n";
}

void deletefrombetween()
{
	//sourabh ters homework h ye. Regards ANshul;
}

void reverse()
{
	current=head;
	prev=NULL;
	while(current!=NULL)
	{
		temp2=current->nextadd;
		current->nextadd=prev;
		prev=current;
		current=temp2;
	}
	temp2=prev;
	cout<<"Reverse Linklist is: ";
	while(temp2!=NULL)
	{
		cout<<temp2->data<<" ";
		temp2=temp2->nextadd;
	}
	cout<<endl;
	
}
main()
{
	int ch;
	
	while(true)
	{	
		cout<<"\nEnter your choice \nPRESS \n1. Continue to Insert \n2. display whole linklist \n3. EXIT \n4. Insert at beginning \n5. Insert in between \n6. DELETE From BEGINNING \n7. Delete from end \n8. REVERSE LINKLIST \n\n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				insert();
				break;
			
			case 2:
				display();
				break;
			
			case 3:
				exit(1);	
				
			case 4:
				insertatbeg();
				break;
				
			case 5:
				insertinbetween();
				break;
				
			case 6: 
				deleteatbeg();
				break;
				
			case 7:
				deletefromend();
				break;
				
			case 8:
				reverse();
				break;
		}
	}
}

