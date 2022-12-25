//Algorithm that asks the user to enter two integers and determines and displays the larger number.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;

	printf("Please enter first integer: ");
	scanf("%d", &num1);

	printf("Please enter second integer: ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf(" Num1 : %d is larger than num2 ", num1);
	}

	else if (num2 > num1)
	{
		printf(" Num2 : %d is larger than num1 ", num2);
	}

	else
	{
		printf("Both numbers are equal.");
	}
	return 0;
}