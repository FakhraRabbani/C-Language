//Printing out larger of two numbers using function
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int maximum(int a, int b)
{
	int large = a;
	if (b > a)
	{
		large = b;
	}
	return large;
}
int main()
{
	int num1 = 0, num2 = 0;

	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("Enter number 2: ");
	scanf("%d", &num2);

	printf("Maximum number is %d \n", maximum(num1, num2));
	return 0;
}



	
