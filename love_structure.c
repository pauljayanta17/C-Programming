#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("The LOVE structure is \n");
	
	n=6;
	for(i=0;i<n;i++)
	{
		for(k=0;k<2*(n-i)-1;k++)
		{
			printf(" ");
		}
		if(i==5){
			printf("*");
		}
		else{
		for(j=0;j<2;j++)
		{
			printf("*");
		}
		}
		printf("\n");
	}
}
