//Median Function
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 50
#include<stdio.h>
double Median(double arr[], int size)
{
    double median_avg;

    if (size % 2 == 0)  //If array is even
    {
       double i, j, index;
       index = size - 1;   //In arrays indexing starts from 0..thats why we did this
       i = (index + 1) / 2;  //first middle element
       j = i - 1;   //2nd middle element
       for (int k = j; k < j + 1; k++)
       {
           median_avg = (*(arr + k) + *(arr + (k + 1))) / 2;      //using pointer notation to find avg(median)
       }
       return median_avg;
    }
    else if (size % 2 != 0) //For odd array
    {
        median_avg = *(arr +  (size / 2));  //Element at the middle index is median in odd array
        return median_avg;
    }
}
int main()
{
     double arr[10] = { 17.0, 22.0, 27.0, 32.0, 45.0, 67.0, 68.0, 89.0, 99.0, 101.0 };
    // double arr[9] = { 17.0, 22.0, 32.0, 45.0, 67.0, 68.0, 89.0, 99.0, 101.0 };

    int n;     
    n = sizeof(arr) / sizeof(arr[0]); //Finding number of elements in array
    printf("\nTotal number of elements in array are: %d", n);

    printf("\nArray is :\n");       //Displaying array
    for (int i = 0; i < n; i++)
    {
        printf("%.3lf, ", *(arr  + i));
    }

    double median = Median(arr, n);  //Calling function to find median
    printf("\nMedian is :%lf", median);
    return 0;
}
