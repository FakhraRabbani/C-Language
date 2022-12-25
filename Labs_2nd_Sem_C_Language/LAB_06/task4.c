//prgrm determining charge for each customer
//Parking Charges
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float calculateCharge(float hrs)
{
	float hours = 3, additional_hrs, charge = 2.0 ;
	
	if (hrs <= 3)
	{
		charge = 2.00;
	}
	else if (hrs > 3 && hrs < 24)
	{
		additional_hrs = hrs - hours;
		for (int i = 1; i <= additional_hrs; i++)
		{
			charge = charge + 0.50;
		}
	}
	else if (hrs == 24)
	{
		charge = 10.0;
	}
	return charge;
}
int main()
{
	float hrs1, hrs2, hrs3, charge1, charge2, charge3, total_charges, total_hrs;

	printf("Enter hours for car1: ");
	scanf("%f", &hrs1);

	printf("Enter hours for car2: ");
	scanf("%f", &hrs2);

	printf("Enter hours for car3: ");
	scanf("%f", &hrs3);

	charge1 = calculateCharge(hrs1);
	printf("\nCharges for car 1 are %.2f for %.2f hours", charge1, hrs1);

	charge2 = calculateCharge(hrs2);
	printf("\nCharges for car 2 are %.2f for %.2f hours", charge2, hrs2);

	charge3 = calculateCharge(hrs3);
	printf("\nCharges for car 3 are %.2f for %.2f hours", charge3, hrs3);

	total_hrs = hrs1 + hrs2 + hrs3;
	printf("\nTotal hours are %.2f", total_hrs);

	total_charges = charge1 + charge2 + charge3;
	printf("\nTotal charges are %.2f", total_charges);

	printf("\n\n");

	printf("Car \t Hours \t Charge\n");
	printf("1 \t %.2f \t %.2f\n", hrs1, charge1);
	printf("2 \t %.2f \t %.2f\n", hrs2, charge2);
	printf("3 \t %.2f \t %.2f\n", hrs3, charge3);
	printf("TOTAL \t %.2f \t %.2f\n",total_hrs, total_charges);

	return 0;
}

