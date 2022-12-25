//Taking an array and putting odd numbers in odd array and even numbers in even array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50
int isEven(int num);
int main()
{
	//Creating an array of numbers of size 50
	int array[SIZE];

	srand(time(0));

	//Initializing array randomly from 1 to 200
	for (int i = 0; i < SIZE; i++)
	{
	  *(array + i) = 1 + rand() % 200;
	}

	//Displaying main(original) array
	printf("Main array is:  ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", *(array + i));
	}

	//Taking 2 more arrays -> one for even, other for odd numbers
	int even[SIZE];
	int odd[SIZE];

	//Accessing each element of array and checking whether it is even or odd through calling function -> isEven(), and then storing even no in even array and odd nos in odd array

	int j = 0, k = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (isEven(*(array + i)))
		{
		 	*(even + j) = *(array + i);
			j++;
		}
		else
		{
		 	*(odd + k) = *(array + i);
			k++;
		}
	}

	//Displaying even numbers array
	printf("\n\nEven array is:  ");
	for (int i = 0; i < j; i++)
	{
		printf("%d, ", *(even + i));
	}
	//Displaying odd numbers array
	printf("\n\nOdd array is:  ");
	for (int i = 0; i < k; i++)
	{
		printf("%d, ", *(odd + i));
	}


	return 0;
}
int isEven(int num)
{
	//If number is even, it will return 1 ; otherwise 0
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
