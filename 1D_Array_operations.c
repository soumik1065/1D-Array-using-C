#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int arr[MAX],i,n,pos,value;

void add();
void display();
void add_position();
void delete();

void main()
{
	while(1)
	{
		int ch;
		printf("\n\nImplementation of Array: ");
		printf("\n1.Add\n2.Display\n3.Add at any position\n4.Delete\n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				add();
				break;

			case 2:
				display();
				break;

			case 3:
				add_position();
				break;

			case 4:
				delete();
				break;

			case 5:
				exit(1);
				break;

			default:
				printf("\nWrong choice!!!");
				break;

		}
	}
}

void add()
{
	printf("\nEnter the total number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the %d elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

}

void display()
{
	printf("\nElements in the array are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

}

void add_position()
{
	printf("\nEnter the position: ");
	scanf("%d",&pos);

	if(pos>n)
	{
		printf("Invalid position!!");
	}

	else
	{
		printf("\nEnter the new element: ");
		scanf("%d",&value);

		for(i=n-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}

		arr[pos-1]=value;
		n++;
	}
	
}

void delete()
{
	printf("\nEnter the position: ");
	scanf("%d",&pos);

	for(i=pos-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}