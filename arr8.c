#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5],i,j;
	printf("Array 1:");
	for(i=0;i<5;i++)
		{
			printf("%d",a[i]);
		}
			for(i=0;i<5;i++)
			{
			  b[j]=a[i];
		    }
	    printf("Array 2=");
	for(j=0;j<5;j++)
		{
		printf("%d ",b[j]);
	    }
		
	}
