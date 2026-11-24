#include <stdio.h>
#include <conio.h>

void main()
{
	 float quantity, price, discount;
	 float total, discountAmount, finalAmount;
	 clrscr();

	 printf("enter the quantity : ");
	 scanf("%f",&quantity);

	 printf("enter the price : ");
	 scanf("%f",&price);

	 printf("enter the discount percentage : ");
	 scanf("%f",&discount);

	 total = quantity * price;
	 disountAmount = (total * discountAmount) / 100;
	 finalAmount = total - discountAmount;

	 printf("final amount = %.2f", finalAmount);

	 getch();
}