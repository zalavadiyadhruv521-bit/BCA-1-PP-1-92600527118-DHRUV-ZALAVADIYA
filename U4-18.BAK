#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i, temp, rem, sum;
	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		temp = 1;
		sum = 0;

		while(temp > 0)
		{
			rem = temp % 10;
			sum = sum + (rem * rem * rem);
			temp = temp / 10;
		}

		if(sum == i)
			printf("%d", i);
	}

	getch();
}