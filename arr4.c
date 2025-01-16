#include<stdio.h>
int main()
{
	int arr[10]={90,50,60,80,10,40,50,99,87,56};
	int i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
			k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
		}
		}
	}
printf("Array:");
for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
}
}

