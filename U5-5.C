#include<stdio.h>
#include<conio.h>

int palindrome(int n)
{
	int temp, r = 0;
	clrscr();

	temp = n;

	while(n>0)
	{
		r = r * 10 + n % 10;
		n = n / 10;
	}

	return temp == r;
}

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	if(palindrome(n))
		printf("number is palindrome");
	else
		printf("number is not palindrome");

	getch();
}