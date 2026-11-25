#include<stdio.h>
#include<conio.h>

int sum(int n)
{
	int s = 0;
	clrscr();

	while(n>0)
	{
		s = s + n % 10;
		n = n / 10;
	}

	return s;
}

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	printf("sum of digits = %d", sum(n));

	getch();
}