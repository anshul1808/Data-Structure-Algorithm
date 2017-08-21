#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;
typedef struct node
{
	int data;
	struct node* nextadd;
}node;
main()
{	int item;
	cout<<"enter the item data";
	cin>>item;
	node* n1=(node*)malloc(sizeof(node));
	n1->data=item;
	n1->nextadd=NULL;
	
	node* head=NULL;
	head=n1;
	
	item=30;
	node* n2=(node*)malloc(sizeof(node));
	n1->nextadd=n2;
	n2->data=item;
	n2->nextadd=NULL;
	
	item=40;
	node* n3=(node*)malloc(sizeof(node));
	n2->nextadd=n3;
	n3->data=item;
	n3->nextadd=NULL;
//////***************** INSERT BETWEEN n1 and n2;	
	item =50;
	node* n4=(node*)malloc(sizeof(node));
	n4->data=item;
	n4->nextadd=n2;
	n1->nextadd=n4;
	
///////////////// ************** INSERT AT BEGINNING**************
	item=70;
	node* n5=(node*)malloc(sizeof(node));
	n5->data=item;
	n5->nextadd=n1;
	head=n5;
	
///////////////// *************** INSERT AT END********************
	item=100;
	node* n6=(node*)malloc(sizeof(node));
	n6->data=item;
	n6->nextadd=NULL;
	n2->nextadd=n6;
	
	while(head!=NULL)
	{
		printf(" %d %d \n", head->data, &head->data);
		head=head->nextadd;
	}

}
