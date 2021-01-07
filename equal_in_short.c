#include<stdio.h>
main()
{
	int r,s=0,s1,no,rem,res;
	printf("Enter a number to check its equal or not ");
	scanf("%d",&no);
	rem=no%100;
	res=no/100;
	while(rem>0)
	{
		r=rem%10;
		rem=rem/10;
		s=s+r;
	}
	s1=s;
	s=0;
	while(res>0)
	{
		r=res%10;
		res=res/10;
		s=s+r;
	}
	if(s==s1)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
		
	}
}
