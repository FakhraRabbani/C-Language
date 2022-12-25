//task05
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
void ReadThemAll(int *p, int num1,int num2);
int main()
{
	//Defining array of size 20
	int t[SIZE];

	srand(time(0));
	//Initializing array randomly
	for (int i = 0; i < SIZE; i++)
	{
		t[i] = rand() % 20;
	}
	//printing array
	printf("Array elements are: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", t[i]);
	}
    
	printf("\n\n");

	//Defining 2 int integers and taking input from user in them
	int n1 = 0;
	int n2 = 0;

	printf("Enter starting integer: ");
	scanf("%d", &n1);

	printf("Enter ending integer: ");
	scanf("%d", &n2);

	printf("Integer numbere between the range are: ");
	ReadThemAll(t,n1,n2);

	return 0;
}
void ReadThemAll(int* p, int num1, int num2)
{
	//Printing out numbers between num1 and num2
	
	for (int i = 0; i < SIZE; i++)
	{
		if (*(p + i) == num1)
		{
			for (int j = i + 1; *(p + j) != num2; j++)
			{
				printf("%d, ", *(p + j));
			}
		}
	}
	
}
*/