#include<stdio.h>
int main()
{
	int arr[5]={2,4,5,6,8};
	int newarr[5],i,j=0;
	for(i=0;i<5;i++)
	{
	if(arr[i]%2==0)
	{
		newarr[j]=arr[i];
		printf("%d",newarr[j]);
		j++;
	}
}
for(i=0;i<5;i++)
{
 if(arr[i]%2!=0)
 {
 	newarr[j]=arr[i];
 	printf("%d",newarr[j]);
 	j++;
 }
}
	
}
