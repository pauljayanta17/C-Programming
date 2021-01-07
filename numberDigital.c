#include<stdio.h>
#include<windows.h>
void gotoxy(short int col, short int row);
void space(int space);
main()
{
	int i,j,k,n,temp,r;
	printf("Enter a number and print it to digital format ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=r%10;
		i++;
		n=n/10;
	}
	
	while(temp>0)
	{
		r=temp%10;
		
		temp=temp/10;
		if(i>1)
		{
			void space(i);
		}
		switch(r)
		{
			
		}
	}
	 
	
}

void gotoxy(short int col,short int row)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {col,row};
	SetConsoleCursorPosition(hStdout,position);
}

