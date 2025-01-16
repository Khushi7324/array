#include<stdio.h>
int main()
{
	int arr[5]={1,4,5,6,7},sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum is:%d\n",sum);
}
