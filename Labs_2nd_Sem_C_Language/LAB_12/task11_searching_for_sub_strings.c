//Searching for substrings
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char lineOftext[100];
	printf("Enter a line of text: ");
	fgets(lineOftext, 100, stdin);  //getting line of text from the user

	char search[50];
	printf("Enter a search string: ");
	scanf("%s", search);    //getting search string from user

	char* searchPtr1;       
	searchPtr1 = strstr(lineOftext, search);  //searching for search string in line of text

	if (searchPtr1)
	{
		printf("\n\nThe remainder of line beginning with the first occurence of %s is:\n%s", search, searchPtr1);

		searchPtr1 = strstr(searchPtr1 + 1, search); //search for second occurence
		
		if (searchPtr1)
		{
			printf("\nThe remainder of line beginning with the second occurence of %s is:\n%s", search, searchPtr1);
		}
		else
		{
			printf("\nThe search string appeared only once.");
		}
	}
	else
	{
		printf("\n%s not found.", search);
	}


	return 0;
}
