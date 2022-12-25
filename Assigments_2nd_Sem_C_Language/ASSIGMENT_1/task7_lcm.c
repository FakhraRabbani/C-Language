//Program which ask the user to enter two positive integers. Then calculating their LCM and printing the result on screen.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, lcm;
	int factorial = 1;

	printf("Enter first number: ");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("Invalid Input!");
		printf("  Enter first number again:");
		scanf("%d", &num1);
	}

	printf("Enter second number: ");
	scanf("%d", &num2);
	while (num2 < 0)
	{
		printf("Invalid Input!");
		printf("  Enter second number again:");
		scanf("%d", &num2);
	}

	if (num1 > num2)
	{
		lcm = num1;
	}
	else
	{
		lcm = num2;
	}
	while (factorial)
	{
		if ((lcm % num1 == 0) && (lcm % num2 == 0))
		{
			printf("LCM is: %d", lcm);
			factorial = 0;
		}
		lcm++;
	}
	return 0;
}
