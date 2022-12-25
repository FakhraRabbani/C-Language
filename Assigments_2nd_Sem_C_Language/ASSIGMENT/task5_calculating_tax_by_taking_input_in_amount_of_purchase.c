//Program that will ask the user to enter the amount of purchase. It will then compute the federal and provincial sales tax.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float purchase, fedSaletax, provSaletax, totalSaletax, totalSale;
	printf("Please enter the amount of a purchase :");
	scanf("%f", &purchase);
	printf("The amount of purchase is: %f", purchase);

	fedSaletax = purchase * 0.06;
	printf("\nThe amount of the federal sale tax is : %f", fedSaletax );


	provSaletax = purchase * 0.04;
	printf("\nThe amount of the provincial sale tax is : %f", provSaletax);

	totalSaletax = fedSaletax + provSaletax;
	printf("\nThe amount of the total sale tax is : %f", totalSaletax);

	totalSale = purchase + totalSaletax;
	printf("\nThe total of the sale is : %f", totalSale);


	return 0;


}