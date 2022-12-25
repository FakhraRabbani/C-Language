//DIVISION WITHOUT /
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int dividend, divisor, rem;
	int count = 0;

	printf("Enter Dividend: ");
	scanf("%d", &dividend);

	while (dividend < 0)
	{
		printf("Invalid Dividend Input!\n");
		printf("Enter dividend again: ");
		scanf("%d", &dividend);
	}

	printf("Enter Divisor: ");
	scanf("%d", &divisor);

	while ((divisor < 0) || (divisor > dividend))
	{
		printf("Invalid Divisor Input!\n");
		printf("Enter divisor again: ");
		scanf("%d", &divisor);
	}

	rem = dividend;
	while (rem >= divisor)
	{
		rem = rem - divisor;
		count++;
	}

	printf("Quoitient is: %d\n", count);
	printf("Remainder is: %d", rem);

	return 0;

}
