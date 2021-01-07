#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character and change it to uppercase or lowercase ");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		ch=ch-32;
		printf("%c",ch);
	}
	else if(ch>=65 && ch<=90)
	{
		ch=ch+32;
		printf("%c",ch);
	}
	else{
		printf("Wrong input");
	}
}
