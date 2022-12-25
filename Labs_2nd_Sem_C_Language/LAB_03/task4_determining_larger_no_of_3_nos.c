//Algorithm that asks the user to enter three integers, and determines and displays the largest number.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, num3;

	printf("Please enter first integer: ");
	scanf("%d", &num1);

	printf("Please enter second integer: ");
	scanf("%d", &num2);

	printf("Please enter third integer: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("Num1 : %d is larger than num2 and num3 ", num1);
	}

	else if (num2 > num1 && num2 > num3)
	{
		printf("Num2 : %d is larger than num1 and num3", num2);
	}

	else if (num3 > num1 && num3 > num1)
	{
		printf("Num3 : %d is larger than num1 and num2", num3);
	}


	else
	{
		printf("All are equal.");
	}
	return 0;
}