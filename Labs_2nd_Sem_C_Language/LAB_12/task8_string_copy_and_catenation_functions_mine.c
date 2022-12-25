//Own string copy and string catenation functions
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 80
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* myStrcpy1(char str1[], char str2[]);
char* myStrcpy2(char *str1, char *str2);
char* myStrcat1(char str1[], char str2[]);
char* myStrcat2(char* str1, char* str2);
int main()
{
    //Taking input in strings
	char string1[SIZE];
	printf("Enter string 1: ");
	scanf("%s", string1);
 
	char string2[SIZE];
	printf("Enter string 2: ");
	scanf("%s", string2);
 	
	printf("\nBefore copying string1 is : %s and string 2 is %s.\n\n", string1, string2);

	//Copying string 2 in string1
	myStrcpy1(string1, string2);
	printf("\nAfter copying through array indexing :\nString1 is %s", string1);
	myStrcpy2(string1, string2);
	printf("\nAfter copying through pointers :\nString1 is %s", string1);
	//Concatenating 2 strings
	myStrcat1(string1, string2);
	printf("\nAfter concatenating : %s", string1);
	myStrcat2(string1, string2);
	printf("\nAfter concatenating : %s", string1);
	return 0;
}
char* myStrcpy1(char str1[], char str2[])
{
	//Using array indexing
	//Copying elements of second array into the first array
	int i = 0;
	for (i = 0; str2[i] != '\0';i++)
	{
		str1[i] = str2[i];
	}
	str1[i] = '\0';
	return str1;
}
char* myStrcpy2(char* str1, char* str2)
{
	//Copying elements of second array into the first array through pointers
	char* p1;
	char* p2;
	for (p1 = str1, p2 = str2; *p2 != '\0'; p1++, p2++)
	{
		*p1 = *p2;
	}
	*p1 = '\0';
	return str1;
}
char* myStrcat1(char str1[], char str2[])
{
	int i, j;
	for (i = 0; str1[i] != '\0'; i++) //This loop simply finds the end of first string
		;
	for (j = 0; str2[j] != '\0'; j++, i++) //(concatenation)This loop copies the elements of second array into first array , beginning at end of first string
	{
		str1[i] = str2[j];
	}
	
	str1[i] = '\0'; //Adding null character to the new end of first string
	return str1; 
}
char* myStrcat2(char *str1, char *str2)
{
	char* p1;
	char* p2;
	for (p1 = str1; *p1 != '\0'; p1++) //This loop simply finds the end of first string
		;
	for (p2 = str2; *p2 != '\0'; p1++, p2++) //(concatenation)This loop copies the elements of second array into first array , beginning at end of first string
	{
		*p1 = *p2;
	}

	*p1 = '\0'; //Adding null character to the new end of first string
	return str1;
}
