/*
//adding 2 arrays and storing sum in 3rd array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void addArrays(const int* a1, const int* a2, int* sum, int size);
int main()
{
	int a1[SIZE];
	int a2[SIZE];
	int a3[SIZE];

	//taking input from user in array 1 and array 2
	int *a1ptr = a1;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter %d element of array no 1: ", i + 1);
		scanf("%d", a1ptr++);

	}

	printf("\n");
	//printing 1st array
	printf("1st array elements are: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", a1[i]);
	}

	printf("\n");

	int *a2ptr = a2;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter %d element of array no 2: ", i + 1);
		scanf("%d", a2ptr++);

	}

	printf("\n");
	//printing 2nd array
	printf("2nd array elements are: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", a2[i]);
	}
	
	//calling function to add arrays
	addArrays(a1, a2, a3, SIZE);

	return 0;
}
void addArrays(const int* a1, const int* a2, int* sum, int size)
{
	//adding 2 arrays and storing sum in 3rd array
	for (int i = 0; i < size; i++)
	{
		*(sum + i) = *(a1 + i) + *(a2 + i);
	}
	//printing 3rd array
	printf("\n");
	printf("3rd array elements are: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", sum[i]);
	}
}
*/