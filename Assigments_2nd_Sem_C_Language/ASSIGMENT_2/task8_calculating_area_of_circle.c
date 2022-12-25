//program that uses the FOUR functions to calculate and display the area of a circle
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double isValid(double num, double start, double end);
double getRadius();
double calculateArea(double radius, double* area);
void displayArea(double area);
int main()
{
	double radius = getRadius();
    double area = calculateArea(radius, &area);
	displayArea(area);
	return 0;
}
//This function will return true if the value of the variable num is in the range from start to end (both inclusive), and it will return false otherwise.
double isValid(double num, double start, double end)
{
	
	if (num >= start && num <= end)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
double getRadius()
//This function will prompt the user to enter the radius of a circle in the range from 10.0 to 50.0 (both inclusive).
//In case of invalid input, this function should keep prompting the user again and again till the user provides valid input.
{
	double rad;
	printf("Enter the radius of circle in range from 10.0 to 50.0: ");
	scanf("%lf", &rad);
	while (!(isValid(rad, 10.0, 50.0)))
	{
		printf("INVALID RADIUS!\nPlz enter the radius of circle in range from 10.0 to 50.0: ");
		scanf("%lf", &rad);
	}
	return rad;
}
double calculateArea(double radius, double* area)
//It will calculate and store the area of the circle into the reference / pointer parameter area
{
	*area = 3.14 * radius * radius;
	return *area;
}
void displayArea(double area)
//This function will display the area of the circle on the screen.
{
	printf("Area of circle is %lf: ", area);
}


