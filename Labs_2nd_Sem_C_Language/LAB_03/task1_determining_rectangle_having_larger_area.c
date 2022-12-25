//Algorithm that asks for the lengthand width of two rectangles.
//The algorithm tells rectangle has the greater area, or whether the areas are the same.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float length1, length2, width1, width2, area1, area2;

	printf("Please enter the length of first rectangle: ");
	scanf("%f", &length1);

	printf("Please enter the width of first rectangle: ");
	scanf("%f", &width1);

	printf("\nPlease enter the length of second rectangle: ");
	scanf("%f", &length2);
	printf("Please enter the width of second rectangle: ");
	scanf("%f", &width2);

	area1 = length1 * width1;
	area2 = length2 * width2;

	if (area1 > area2)
	{
		printf("Area of rectangle1 is larger than the second rectangle");
	}
	else if (area2 > area1)
	{
		printf("Area of rectangle2 is larger than first rectangle");
	}
	else
	{
		printf("Areas are same.");
	}
	return 0;
}