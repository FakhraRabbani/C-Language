//program that calculate the diameter, area, and circumference of a circle.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int radius, diameter;
	float area, circumference;
	float pi = 3.14;

	printf("Please enter the radius of the circle: ");
	scanf("%d", &radius);

	diameter = 2 * radius;
	printf("The diameter of the circle is: ");
	printf("%d", diameter);

	area = pi * radius * radius;
	printf("The area of the circle is: %f\n", area);

	circumference = 2 * pi * radius;
	printf("The circumference of the circle is: %f\n", circumference);
	return 0;
}