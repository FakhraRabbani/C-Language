//Writing a function replace(char str[], char c1, char c2) which takes 3 parameters:
//a character array, a character to find and a character to replace.
//Function will find all occurrences of a character(taken as the 2nd parameter) and
//replace it with another character(taken as 3rd parameter) and display it at the end.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void replace(char str[], char c1, char c2);
int main()
{
	char str[SIZE];
	printf("Enter an array: ");
	scanf("%s", &str);
	getchar();
	char c1;
	char c2;
	printf("Enter character u want to find: ");
	scanf("%c", &c1);
	getchar();
	printf("Enter character u want to replace with: ");
	scanf("%c", &c2);
	getchar();
	printf("Before replacing : \n");
	printf("%s", str);
	printf("\n");
	replace(str, c1, c2);
	return 0;
}
void replace(char str[], char c1, char c2)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c1)
		{
			str[i] = c2;
		}
	}
	printf("After replacing: \n");
	printf("%s", str);
}
