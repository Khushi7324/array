#include<stdio.h>
int main()
{
	int arr[5];
	int i,j;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	}

