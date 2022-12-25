//program that reads an integer (5 digits or fewer) and determines and prints how many digits in the integer are 6s.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int num, sum = 0, rem = 0;

	printf("Enter a 5-digit or fewer digit number: ");
	scanf("%d", &num);


	for (int i = 1; num != 0; i++)
	{
		rem = num % 10;
		num = num / 10;
		if (rem == 6)
		{
			sum = sum + 1;
		}
	}
	printf("Digits in integer are: %d", sum);


	return 0;
}