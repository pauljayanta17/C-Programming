#include<stdio.h>
main()
{
	int n,j,a,k,i;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		a=1;
		for(j=1;j<=(2*i)-1;j++)
		{
			
			if(j<=i)
			{
				printf("%d",j);
				a=j;
			}
			else if(j>i)
			{
				a=a-1;
				printf("%d",a);
			}
		}
		printf("\n");
	}
	
	
}
