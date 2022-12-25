//program that take an integer number from user and print sum of the digits of that number.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int digit, num;
	int sum = 0, rem;
	int counter = 0;

	printf("Enter the number: ");
	scanf("%d", &num);


	while (num)
	{

		if (num > 0)
		{
			rem = num % 10;
			num = num / 10;
			sum = sum + rem;
			counter++;
		}
		else if (num < 0)
		{
			num = num * -1;
			rem = num % 10;
			num = num / 10;
			sum = sum + rem;
			counter++;
		}

	}
	printf("Sum of digits is : %d\n", sum);
	printf("Total number of digits : %d ", counter);


	return 0;
}
