#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n,no,sum=0;
	printf("Enter the lines number ");
	scanf("%d",&n);
	printf("The structure is \n");
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<(2*i)+1;j++)
		{
			no=pow(-1,j);
			sum=sum+no;
			printf("%d",sum);
		}
		printf("\n");
	}
}
