//Program that asks the user to enter a positive integer and prints whether the integer is prime or not a prime.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, count = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	while (num < 0)
	{
		printf("Invalid Input!");
		printf("  Enter positive integer again:");
		scanf("%d", &num);
	}
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
		}
	}

	if (count == 2)
	{
		printf("%d is a Prime NUmber", num);
	}
	else
	{
		printf("%d is not a Prime NUmber", num);
	}

	return 0;
}