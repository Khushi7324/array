#include<stdio.h>
int main()
{
	int arr[5],arr2[2],arr3[3];
	int i,j=0,k=0;
	printf("Enter elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]%2==0)
		{
			arr2[j]=arr[i];
			j++;
		}
		else
		{
			arr3[k]=arr[i];
			k++;
		}
	}
		for(j=0;j<2;j++)
		{
			printf("Even numbers:%d",arr2[j]);
		}
		for(k=0;k<3;k++)
		{
			printf("Odd numbers:%d",arr3[k]);
		}
		
	}

