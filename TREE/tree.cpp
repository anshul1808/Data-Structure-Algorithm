// ************************* TREES ****************************//
#include<iostream>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;

typedef struct node // create struct with three fields
{	
	struct node* left;
	int data;
	struct node* right;	
}node;

node *newnode, *temp, *root=NULL;
int item;
 
node* createnode()// create new node in tree
{
	newnode=(node*)malloc(sizeof(node)); // newnode= new node();
	newnode->left=NULL;
	newnode->data=item;
	newnode->right=NULL;
	return newnode;
	
}

node* insert(node* root)
{	
	if(root==NULL)
	{
		root=createnode();
	}
	else if(item>root->data)
	{
		root->right=insert(root->right);
	}
	else
	{
		root->left=insert(root->left);
	}
	return root;
}

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<" "<<root->data;
		inorder(root->right);
	}
}

void preorder(node *root)
{
	if(root!=NULL)
	{	
		cout<<" "<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
	
void postorder(node *root)
{
	if(root!=NULL)
	{	
		postorder(root->left);
		postorder(root->right);
		cout<<" "<<root->data;
		
	}
}

bool search(node *root,int item)
{
	if(root==NULL)
	return false;
	
	else if(root->data==item)
	{
	return true;
	}
	
	else if(item>root->data)
	{
		return search(root->right,item);
	}
	
	else
	{ 
		return search(root->left,item);
	}
}
	
main()
{
	while(true)
	{ 	
		int choice;
		cout<<"\nPRESS \n1. to insert \n2. Display Inorder \n3. Display Preorder \n4. Display Postorder \n5. Search a number \n9. exit\n";
		cin>>choice;
		
		switch (choice)
		{
			case 1:
				cout<<"Enter the data"<<endl;
				cin>>item; 
				root=insert(root);
				break;
			
			case 2:
				inorder(root);
				break;
				
			case 3:
				preorder(root);
				break;
				
			case 4:
				postorder(root);
				break;
				
			case 5:
				int num;
				cout<<"Enter the number to be searched:\n";
				cin>>num;
				if(search(root,num)==true)
				cout<<"number found";
				else
				{
					cout<<"number not found";
				}
				cout<<endl;
				break;
				
			case 9:
				exit(5);
		}
				
	}
}
