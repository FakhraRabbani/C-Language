//Task-08 Printing square of number the user types in
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float num, square;
	printf("Please enter a number: ");
	scanf("%f", &num);

	square = num * num;

	printf("In upper case it is : %f", square);
	return 0;
}