#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n, sum = 0;
	clrscr();

	for(i = 1; i <= 10; i++)
	{
	printf("enter number %d : ", i);
	scanf("%d", &n);
	sum = sum + n;
	}

	printf("total = %d", sum);

	getch();
}