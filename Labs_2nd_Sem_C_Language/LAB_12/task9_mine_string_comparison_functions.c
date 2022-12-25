//Own string comparing functions
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 500
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_str_comp1(char* str1, char* str2);
int my_str_comp2(char str1[], char str2[]);
int main()
{
	char string1[SIZE];
	printf("Plz enter a string: ");
	fgets(string1, SIZE, stdin);

	char string2[SIZE];
	printf("Plz enter another string: ");
	fgets(string2, SIZE, stdin);
	
	//calling this fubction to compare strings through pointers
	if (my_str_comp1(string1, string2))
	{
		printf("Both strings are identical");
	}
	else
	{
		printf("Both strings are not identical");
	}
	printf("\n\n");
	//calling this fubction to compare strings through array indexing
	if (my_str_comp2(string1, string2))
	{
		printf("Both strings are identical");
	}
	else
	{
		printf("Both strings are not identical");
	}
	return 0;
}
int my_str_comp1(char* str1, char* str2)
{
	//Through pointers
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if (l1 < l2)
	{
		return 0;
	}
	else if (l1 > l2)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < l1; i++)
		{
			if (*(str1 + i) != *(str2 + i))
			{
				flag = 0;
				break;
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

}
int my_str_comp2(char str1[], char str2[])
{
	//Through indexing
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if (l1 < l2)
	{
		return 0;
	}
	else if (l1 > l2)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < l1; i++)
		{
			if (str1[i] != str2[i])
			{
				flag = 0;
				break;
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
}
