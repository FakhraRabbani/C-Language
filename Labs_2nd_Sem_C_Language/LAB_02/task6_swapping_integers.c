//Algorithm that takes two integers from the user, displays them on screen, swaps them, and again displays them on screen.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int firstInt, secInt, temp;

	printf("Enter First integers: ");
	scanf("%d", &firstInt);

	printf("Enter second integers: ");
	scanf("%d", &secInt);

	printf("After Swap\n");

	temp = secInt;
	secInt = firstInt;
	firstInt = temp;

	printf("Enter First integers: %d\n", firstInt);
	printf("Enter second integers: %d\n", secInt);

	return 0;

	
}