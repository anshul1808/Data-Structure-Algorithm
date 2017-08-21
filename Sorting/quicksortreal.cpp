#include<stdio.h>
 
void quick_sort(int arr[10000],int,int);
 
main()
{
 int i;
 int arr[10000],n;
 //printf("Enter the number of elements in the Array: ");
 scanf("%d",&n);
 
 for(i=0 ; i<n ; i++)
 {
  //Enter the elements		
  scanf("%d",&arr[i]);
 }
 
 quick_sort(arr,0,n-1);
 
 //The Sorted Array is:\n\n");
 printf("\nThe sorted elements are: "); 
 for(i=0 ; i<n ; i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n"); 
 }

 
void quick_sort(int arr[10000],int low,int high)
{
 int pivot,j,temp,i;
 if(low<high)
 {
  pivot=arr[(low+high)/2];
  i = low;
  j = high;
 
  while(i<j)
  {
   while(arr[i]<pivot)
   {
    i++;
   }
 
   while(arr[j]>pivot)
   {
    j--;
   }
 
   if(i<j)//swapping;
   { 
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
  	 					  quick_sort(arr,0,j-1);
  	 					  quick_sort(arr,j+1,high);
 }
}
