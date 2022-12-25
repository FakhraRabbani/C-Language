//Algorithm that asks the user to enter the number of books that he or she has purchased this monthand displays the number of points awarded.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int numberOfbooks;

	printf("Please enter the number of books: ");
	scanf("%d", &numberOfbooks);

	if (numberOfbooks == 0)
	{
		printf("He/she earns 0 points");
	}

	else if (numberOfbooks == 1)
	{
		printf("He/she earns 5 points");
	}

	else if (numberOfbooks == 2)
	{
		printf("He/she earns 15 points");
	}

	else if (numberOfbooks == 3)
	{
		printf("He/she earns 30 points");
	}

	else
	{
		printf("More than 30 points");
	}
	return 0;
}