//Algorithm that prompts the user to enter the lengths of three sides of a triangle
//and then displays a message indicating whether the triangle is a right triangle or not.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int length1, length2, length3, square1, square2, square3, sum;

	printf("Please enter length of one side : ");
	scanf("%d", &length1);

	printf("Please enter length of second side : ");
	scanf("%d", &length2);

	printf("Please enter length of third side : ");
	scanf("%d", &length3);

	square1 = length1 * length1;
	square2 = length2 * length2;
	square3 = length3 * length3;
	sum = square2 + square3;

	if (square1 == sum)
	{
		printf("It is a right triangle.");
	}
	else
	{
		printf("It is not a right triangle.");
	}

	return 0;
}