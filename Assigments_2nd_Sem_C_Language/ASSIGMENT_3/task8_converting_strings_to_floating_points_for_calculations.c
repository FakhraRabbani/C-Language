//8-Converting strings to Floating Point for Calculations
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

    printf("Enter strings of floating points: \n");  //Taking input in strings representing floating points
    printf("Enter first string: ");
    gets(array1);
    printf("Enter 2nd string: ");
    gets(array2);
    printf("Enter 3rd string: ");
    gets(array3);
    printf("Enter 4th string: ");
    gets(array4);

    float sum;
    sum = atof(array1) + atof(array2) + atof(array3) + atof(array4); //converting strings to floating points and taking sum
    printf("The total of four values is %f", sum);  //printing total of four values

    return 0;
}
