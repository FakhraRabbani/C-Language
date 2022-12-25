//Algorithm that asks the user for the number of kilometers driven and the liters of petrol used.
//It should calculate the car’s KMPL and display the result on the screen.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int kiloMeter,liter, kmpl;

	printf("Please enter the number of kilometers driven : ");
	scanf("%d", &kiloMeter);

	printf("Please enter the liter of petrol used : ");
	scanf("%d", &liter);

	kmpl = kiloMeter / liter;

	printf("KMPL of the car %d", kmpl);



	return 0;
}