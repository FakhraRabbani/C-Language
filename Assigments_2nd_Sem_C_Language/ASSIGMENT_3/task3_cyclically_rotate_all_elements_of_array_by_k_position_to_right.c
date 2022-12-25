//Cyclic Rotate
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void cyclicRotate(int arr[], int n, int k);
void cyclicRotatebyOne(int arr[], int n);
int main()
{
    //int arr[] = { 3, 4, 5, 8, 7, 2, 9, 1 };

    int arr[10];

    printf("Enter elements of array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]); //Taking input in array
    }

    printf("\nArray before rotating is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);  //Displaying array before rotating
    }

    int n;
    n = sizeof(arr) / sizeof(arr[0]); //Number of elements of array
    printf("\nNumber of elements in array are %d.", n);

    int k; //Position to the right
    printf("\nEnter the poistion from where u want to rotate the array: ");
    scanf("%d", &k);
    while (k >= n || k <=0)
    {
        printf("\nEnter the poistion from where u want to rotate the array again : ");
        scanf("%d", &k);
    }

    cyclicRotate(arr, n, k); //Calling function

    printf("After rotating array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]); //Displaying array after rotating
    }
    return 0;
}
//Rotating from right
void cyclicRotate(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        cyclicRotatebyOne(arr, n); //Helper function
    }
}
void cyclicRotatebyOne(int arr[], int n)
{
    int temp = arr[n - 1];
    int i;
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}






//Rotating from left
/*
void cyclicRotate(int arr[], int n, int k)
{
   for (int i = 0; i < k; i++)
   {
       cyclicRotatebyOne(arr, n);
   }     
}
void cyclicRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    int i;
    for (int i = 0; i < n - 1 ; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
*/


































