#include<stdio.h>
#include<conio.h>

void main()
{
	int n, a = 0, b = 1, c;
	clrscr();

	printf("enter n : ");
	scanf("%d",&n);

	while(a <=n)
	{
		printf("%d", a);

		c = a + b;
		a = b;
		b = c;
	}

	getch();
}