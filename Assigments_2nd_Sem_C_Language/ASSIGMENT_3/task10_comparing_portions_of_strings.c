//10-Comparing portions of strings
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a1[SIZE];
    char a2[SIZE];

    //Taking input in 2 strings for comparing
    printf("Plz enter first string:");
    gets(a1);
    printf("Enter the second string:");
    gets(a2);

    int n;
    printf("Enter number of characters to be displayed: "); 
    scanf("%d", &n);

    int res = strncmp(a1, a2, n); //Comparing till n characters
    if (res == 0)
    {
        printf("Both are same");
    }
    else if (res < 0)
    {
        printf("First string is less than 2nd one till n.");
    }
    else if(res > 0)
    {
        printf("First string is greater than 2nd one till n.");
    }
    else
    {
        printf("Invalid.");
    }


    return 0;
}
