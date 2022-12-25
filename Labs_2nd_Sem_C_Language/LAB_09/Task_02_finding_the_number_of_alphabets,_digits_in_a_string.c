//Finding number of alphabets, digits in a given string
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void count(char str[]);
int main()
{
	char str[SIZE];
	printf("Enter a character string: ");
	scanf("%s", &str);
	count(str);
	
	return 0;
}
void count(char str[])
{
	int a = 0;
	int d = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			a++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			d++;
		}
	}
	printf("%s has %d alphabets and %d digits.", str, a, d);
}

	