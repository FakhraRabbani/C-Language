//Algorithm that asks the user to enter a 3-digit positive integer, and stores its reverse in another variable, and then, displays both integers on screen.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, digit1, digit2, digit3;

	printf("Enter a 3-digit positive integer: ");
	scanf("%d", &num);

	digit1 = num % 10;
	num = num / 10;

	digit2 = num % 10;
	num = num / 10;

	digit3 = num % 10;
	num = num / 10;

	printf("Its reverse is: %d%d%d ", digit1, digit2, digit3);

	return 0;
}