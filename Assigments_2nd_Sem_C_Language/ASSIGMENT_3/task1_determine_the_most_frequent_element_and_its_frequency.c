//Determining the most frequent element of the array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Frequency(int arr[], int size, int* most_freq, int *f);
int main()
{
    int arr[10];
    
    printf("Plz enter elements of array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);   //Taking input in array
    }

    printf("\nArray is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]); //Displaying whole array
    }

    int n;
    n = sizeof(arr) / sizeof(arr[0]);     //No of elements in array
    printf("\nTotal elements in array are: %d", n);
    
    int most_frequent;
    int frequency;

    Frequency(arr, n, &most_frequent, &frequency);  //Calling function

    printf("\nMost frequent element is %d and its frequency is %d.", most_frequent, frequency);
 	return 0;
}
void Frequency(int arr[], int size, int* most_freq, int *f)
{
    int x = 0;
    int y = 0;
    int count;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)  //Checking duplicate elements
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count > x)
            {
                x = count;
                y = arr[i];
            }
        }
    }
    *most_freq = y;
    *f = x;
}



