//7-Converting strings to integers for Calculations
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char array1[SIZE];
    char array2[SIZE];
    char array3[SIZE];
    char array4[SIZE];

    printf("Enter strings of integers: \n");  //Taking input in strings representing integers
    printf("Enter first string: ");
    gets(array1);
    printf("Enter 2nd string: ");
    gets(array2);
    printf("Enter 3rd string: ");
    gets(array3);
    printf("Enter 4th string: ");
    gets(array4);
      
    int sum;
    sum = atoi(array1) + atoi(array2) + atoi(array3) + atoi(array4); //converting strings to integers and taking sum
    printf("The total of four values is %d", sum);  //printing total of four values

    return 0;
}
