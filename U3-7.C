#include <stdio.h>
#include <conio.h>

void main()
{
	float price, quantity, total, discount, payment;
	clrscr();

	printf("enter the price : ");
	scanf("%f",&price);

	printf("enter the quantity : ");
	scanf("%f",&quantity);

	total = price * quantity;

	if (total > 1000)
	discount = total * 15/100;
	else
	discount = total * 10/100;

	payment = total - discount;
	printf("-----------------------");
	printf("\n total purchase = Rs. %.2f\n", total);
	printf("\n discount = Rs. %.2f\n", discount);
	printf("-----------------------");
	printf("\nfinal payment = Rs. %.2f", payment);

	getch();

}