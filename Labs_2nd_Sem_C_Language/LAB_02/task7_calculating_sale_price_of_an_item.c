//program that calculates the sale price of an item.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float regularPrice, discountAmount, salePrice;

	printf("Regular price: $  ");
	scanf("%f", &regularPrice);

	discountAmount = regularPrice * 0.2;
	printf("Discount amount: $ %f\n", discountAmount);

	salePrice = regularPrice - discountAmount;
	printf("Sale price: $ %f", salePrice);

	return 0;
}