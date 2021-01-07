#include<stdio.h>
main()
{
	int max=-32768,min=32767,n,i;
	printf("How many numbers do you want to enter ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("The largest number is %d\nThe smallest number is %d",max,min);
}
