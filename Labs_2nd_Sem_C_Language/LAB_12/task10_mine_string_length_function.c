//Own string length functions
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 500
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_str_length(const char* n);
int my_str_length2(char str[]);
int main()
{
	char name[SIZE];
	printf("Plz enter a string: ");
	fgets(name, SIZE, stdin);  
	printf("%s\n",name);

	printf("Length of entered string is : %d",  my_str_length(name));
	printf("\nLength of entered string is : %d", my_str_length2(name));
	return 0;
}
int my_str_length(const char* n)
{
	//using pointers
	int i = 0;
	while (*n != '\0')
	{
		i++;
		n++;
	}
	return i;
}
int my_str_length2(char str[])
{
	//using index
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
		;
	}
	return i;
}
