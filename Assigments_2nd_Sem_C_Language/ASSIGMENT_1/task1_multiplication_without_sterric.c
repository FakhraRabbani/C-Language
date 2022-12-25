//MULTIPLICATION WITHOUT *
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, result = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);

	while (num1 < 0)
	{
		printf("First number is invalid!\n");
		printf("Enter first number again: ");
		scanf("%d", &num1);
	}

	printf("Enter second number: ");
	scanf("%d", &num2);

	while (num2 < 0)
	{
		printf("Second number is invalid!\n");
		printf("Enter second number again: ");
		scanf("%d", &num2);
	}

	for (int i = 0; i < num2; i++)
	{
		result = result + num1;
	}
	printf("%d * %d = %d ", num1, num2, result);
	//printf("Product is: %d", result);
	return 0;
}