#include<stdio.h>
int armstrong(int);
main()
{
	int no,temp,su;
	printf("Enter a no to check it's Armstrong number or not ");
	scanf("%d",&no);
	temp=no;
	su=armstrong(no);
	if(temp==su)
	{
		printf("%d is an Armstrong number ",temp);
	}
	else
	{
		printf("%d is not an Armstrong number",temp);
	}
}

int armstrong(int n)
{
	int r,sum=0;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	return sum;
}
