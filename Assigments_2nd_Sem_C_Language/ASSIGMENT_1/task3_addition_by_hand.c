// ADDITION BY HAND
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0, num2 = 0, digit1, digit2, sum = 0, totalSum = 0, counter = 1, rem = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("First number is invalid\n");
		printf("Enter first number again: ");
		scanf("%d", &num1);
	}
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	while (num2 < 0)
	{
		printf("Second number is invalid\n");
		printf("Enter second number again: ");
		scanf("%d", &num2);
	}
	
	while ((num1 != 0) || (num2 != 0) || (rem != 0))
	{
		digit1 = num1 % 10;
		num1 = num1 / 10;

		digit2 = num2 % 10;
		num2 = num2 / 10;

		sum = digit1 + digit2 + rem;
		rem = 0;

		if (sum > 9)
		{
			rem = sum / 10;
			sum = sum % 10;
		}
		totalSum = totalSum + (sum * counter);
		counter = counter * 10;
	}
	printf("The sum is: %d", totalSum);
	return 0;
}