#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	int i, f = 1;
	clrscr();

	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}

	return f;
}

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	printf("factorial = %d", fact(n));

	getch();
}