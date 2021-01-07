#include<stdio.h>
main()
{
	int i;
	printf("Enter a number ");
	scanf("%d",&i);
	printf("The absolute value of %d is ",i);
	if(i<=-1)
	{
		printf("%d",-i);
	}
	else
	{
		printf("%d",i);
	}
}
