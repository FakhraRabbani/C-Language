//Counting number of vowels in character array and converting them into uppercase if they are in lowercase
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int isVowel(ch);
int main()
{
	//Taking input in a character array
	char arr[SIZE];
	printf("Plz enter a character array in lowercase: ");
	scanf("%s", &arr);
	
	//Counting number of vowels in character array and converting them into uppercase if they are in lowercase
	int count = 0;
	printf("Vowel in upperCase: ");
	for (int i = 0; *(arr + i) != '\0'; i++)
	{
		if(isVowel(*(arr + i)))
		{		
			printf("%c", toupper(*(arr + i)));
			count++;
		}
	}
	printf("\nNo. of vowels: %d", count);
	return 0;
}
int isVowel(ch)
{
	if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
