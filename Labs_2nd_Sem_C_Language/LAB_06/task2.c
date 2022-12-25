//program which uses FIVE functions to calculate and display the area of a rectangle whose length and width are taken from the user.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(int num, int start, int end)
//This function will return true if the value of the variable num is in the range from start to end (both inclusive), and it will return false otherwise.
{
	if (num >= start && num <= end)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int getLength()
//This function will prompt the user to enter the length of a rectangle in the range from 5 to 500 (both inclusive).
//In case of invalid input, this function should keep prompting the user againand again till the user provides valid input.
{
	int num;

	printf("Enter the length of rectangle in range between 5 to 500: ");
	scanf("%d", &num);

	while (isValid(num, 5, 500))
	{
		printf("Invalid Input\n Enter the length of rectangle in range between 5 to 500 again: ");
		scanf("%d", &num);
	}
	return num;
}
int getWidth()
//This function will prompt the user to enter the width of a rectangle in the range from 8 to 200 (both inclusive).
//In case of invalid input, this function should keep prompting the user again and again till the user provides valid input.
{
	int num;

	printf("Enter the width of rectangle in range between 8 to 200: ");
	scanf("%d", &num);

	while (isValid(num, 8, 200))
	{
		printf("Invalid Input\n Enter the width of rectangle in range between 8 to 200 again: ");
		scanf("%d", &num);
	}
	return num;
}
int calculateArea(int length, int width) //This function will calculate the area of the rectangle
{
	int area;
	area = length * width;
	return area;
}
void displayArea(int area) //This function will display the area of the rectangle on screen.
{
	printf("The area is : %d", area);
}

int main()
{
	int length, width, area;
	length = getLength();
	width = getWidth();
	area = calculateArea(length, width);
	displayArea(area);
	return 0;
}

