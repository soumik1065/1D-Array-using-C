#include<stdio.h>
void main()
{
	int arr[10],i,*ptr,n;
	ptr=arr;

	printf("Enter the total number of elements: ");
	scanf("%d",&n);

	printf("\nEnter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}

	printf("\nElements in the array are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}