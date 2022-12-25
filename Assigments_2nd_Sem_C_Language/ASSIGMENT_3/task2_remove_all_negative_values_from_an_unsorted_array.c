//Removing negative values from an array
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 50
#include<stdio.h>
int removeNegatives(int arr[], int size, int* newSize)
{
    int count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            count++;   //Counting total negative integers in array
        }
    }
    printf("\nTotal negative values are %d\n", count);
    printf("Array containing only positive integers is %:\n");;
    int temp = 0;
    int j = 1;
    for (int i = 0; i < size - count ; i++)
    {
        if (arr[i] < 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
            i--;
        }
        else
        {
            printf("%d, ", arr[i]);
        }                 
    }

    newSize = size - count;     
    printf("\nNew size of array is %d.", newSize);

    return count;
}
int main()
{
    int arr[10];
    
    printf("Plz enter elements of array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);   //Taking input in array
    }

    printf("\nWhole array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]); //Displaying whole array
    }
    
    int n;          
    n = sizeof(arr) / sizeof(arr[0]);     //No of elements in array
    printf("\nTotal elements in array are: %d", n);
    int newSize = 0;

   
    int total = removeNegatives(arr, n, &newSize);  //Calling function
    printf("\nTotal negative values removed from array are %d", total);  

    return 0;
}
