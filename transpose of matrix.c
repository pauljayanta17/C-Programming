#include<stdio.h>
main()
{
	int arr[10],a=0,j,i;
	printf("Transpose of matrix \nEnter the value of Matrix row wise one by one ");
	for(i=0;i<9;i++)
	{
		printf("\nEnter value %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",arr[a]);
			a=a+3;
		}a=0;
		a=i+1;
		printf("\n");
	}
}
