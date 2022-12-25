//Printing diamond-like shape
//program that takes a positive odd integer (greater than or equal to 3) from the user and prints the diamond - like shape on the screen.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a positive odd number:");
	scanf("%d", &num);
	//Input Validation
	while (num <= 3 || num % 2 == 0)
	{
		printf(" INVALID INPUT!");
		printf("Enter a positive odd number plz : ");
		scanf("%d", &num);
	}

	for (int i = 0; i <= (num + 1) / 2; i++)
	{
		for (int j = 1; j <= num - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = ((num - 1) / 2); i >= 1; i--)
	{
		for (int j = 1; j <= num - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}