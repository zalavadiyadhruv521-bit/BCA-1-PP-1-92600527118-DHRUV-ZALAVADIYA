#include<stdio.h>
#include<conio.h>

int armstrong(int n)
{
	int temp, r, sum = 0;
	clrscr();

	temp = n;

	while(n > 0)
	{
		r = n % 10;
		sum = sum + r * r * r;
		n = n / 10;
	}

	return temp == sum;
}

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	if(armstrong(n))
		printf("number is armstrong");
	else
		printf("number is not armstrong");

	getch();
}