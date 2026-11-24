#include<stdio.h>
#include<conio.h>

void main()
{
	int n, original, digit, sum = 0;
	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);

	original = n;

	while(n != 0)
	{
		digit = n % 10;
		sum = sum + digit * digit * digit;;
		n = n / 10;
	}

	if(sum == original)
		printf("Armstrong number");
	else
		printf("not a armstrong number");

	getch();

}