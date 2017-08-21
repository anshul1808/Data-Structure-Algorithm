////*************SELECTION SORT*****************/////
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int arr[10],temp,i=0;
	cout<<"ENter 10 elements\n";
	while(i<10)
	{
		cin>>arr[i];
		i++;
	}
	i=0;
	cout<<"the entered you entered elements are\n";
	while(i<10)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	for(i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	i=0;
	cout<<"\n\nthe sorted elements are\n";
	while(i<10)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	
}

