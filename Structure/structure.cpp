#include<iostream>
#include<conio.h>
using namespace std;
main()
{	int stud,i;
	cout<<"Enter the number of students";
	cin>>stud;
	struct student
	{
		int sno;
		char sname[20];
		int marks;
	};
	struct student b[stud];
	
	for( i=0;i<stud;i++)
	{	puts("Enter serialno name marks");
		scanf("%d %s %d",&b[i].sno, &b[i].sname, &b[i].marks);
	}
	
	for( i=0; i<stud; i++)
	{
		printf("\n %5d %10s %5d", b[i].sno, b[i].sname, b[i].marks);
	}
	
	int avg=0;
	while(i--)
	{
		avg=avg+b[i].marks;
		
	}
	avg=avg/stud;
	printf("\n \navg marks =  %d",avg);
	
	while(i<stud)
	{
		if(b[i].marks>=avg)
		{
			printf("\n %5d %10s %5d", b[i].sno, b[i].sname, b[i].marks);
		}
		i++;
	}
	
	
	
}
