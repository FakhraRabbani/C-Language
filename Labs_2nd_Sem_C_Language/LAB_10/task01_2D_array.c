/*
//Write a program that create a two-dimensional integer array named X of 3 by 3, andinitialize it by user input, and write the following functions.
//1. Write a function to print array as printArray(X);
//2. Write a function that calculates the average of all the elements in the integer array named X.
//3. Write a function that computes the square root of the sum of the squares of all the positive elements in array named X.
//4. Write a function that take array X and an integer num and return true if num exist in X, false otherwise.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define ROW 3
#define COL 3
void printArray(int X[][COL]);
void calculateAverage(int X[][COL]);
void calculate_sqrt_of_sum(int X[][COL]);
int findNum(int X[][COL], int num);
int main()
{
	int X[ROW][COL];
	//Initializing 2-d array by taking input from user
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("Plz enter element of %d row and %d column of X(2-d array): ",i + 1,j + 1);
			scanf("%d", &X[i][j]);
		}
		printf("\n");
	}
	//Calling function to print array
	printArray(X);

	printf("\n\n");

	//Calling function to calculate average of all elements in array
    calculateAverage(X);

	printf("\n\n");

	//Calling function to compute sqaure root of sum of all postive elements of array
	calculate_sqrt_of_sum(X);

	printf("\n\n");
	
	int num = 0;
	printf("Plz enter the number you want to find in the array: ");
	scanf("%d", &num);

	//Calling function to find if number entered by user is present in array or not. If function returns 1(true) it means it is present otherwise it will return 0(false) means not present
	if (findNum(X, num))
	{
		printf("Number found.");
	}
	else
	{
		printf("Number not found.");
	}

	return 0;
}
void printArray(int X[][COL])
{
	//printing array
	printf("Array(2-d) X is: \n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d\t", X[i][j]);
		}
		printf("\n");
	}
}
void calculateAverage(int X[][COL])
{
	int sum = 0;
	double avg = 0;
	int count = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			sum = sum + X[i][j];
			count++;
		}
	}
	printf("Sum of elements of array is: %d\n", sum);
	printf("Total number of elements in array are: %d\n", count);
	avg = (double) sum / count;
	printf("Average of all elements in array is: %lf\n", avg);
}
void calculate_sqrt_of_sum(int X[][COL])
{
	int sum = 0;
	double squareRoot = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			//Adding condition(we need to take sum of only positive elements of array) 
			if (X[i][j] >= 0)
			{
				sum = sum + (X[i][j] * X[i][j]);
			}
		}
	}
	printf("Sum of square of elements of array is: %d\n", sum);
	squareRoot = sqrt(sum); //sqrt() is build in function to find square root
	printf("Squareroot of sum of squares of all elements of array is: %lf\n", squareRoot);

}
int findNum(int X[][COL], int num)
{
	int flag = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (X[i][j] == num)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/
