//Algorithm that asks the user to enter a 3-digit positive integer. Then, the algorithm calculates and displays the sum of the digits of that integer.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, digit1, digit2, digit3, sum;

	printf("Enter a 3-digit positive integer: ");
	scanf("%d", &num);

	digit1 = num % 10;
	num = num / 10;

	digit2 = num % 10;
	num = num / 10;

	digit3 = num % 10;
	num = num / 10;

	sum = digit1 + digit2 + digit3;

	printf("The sum of the digits is : %d ", sum);

	return 0;
}