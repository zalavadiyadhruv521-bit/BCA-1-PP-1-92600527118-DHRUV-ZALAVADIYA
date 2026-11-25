#include<stdio.h>
#include<conio.h>

int reverse(int n)
{
	int r = 0;
	clrscr();

	while(n > 0)
	{
		r = r * 10 + n % 10;
		n = n / 10;
	}

	return r;
}

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	printf("reverse = %d", reverse(n));

	getch();
}