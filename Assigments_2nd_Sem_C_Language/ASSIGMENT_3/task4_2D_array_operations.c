//2D array operation
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
int getTotal(int arr[ROW][COL])
{
    int total = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            total = total + arr[i][j]; //Taking sum of all values of 2-d array
        }
    }
    return total;  //Returning total of all values in the array
}
int getAverage(int arr[ROW][COL])
{
    int total = 0;
    int count = 0;
    int avg = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            total = total + arr[i][j]; //Taking sum of all values of 2-d array
            count++;                 //Counting total number of elements of 2-d array
        }
    }
    avg = total / count; //Finding average of all elements of 2-d array
    return avg; //Returning average of all values in the array
}
int getRowTotal(int arr[ROW][COL], int r)
{
    int total = 0;
    r = r - 1;
    printf("Elements of specified row are: \n");
    for (int i = r ; i < r + 1; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d, ", arr[i][j]);   //Printing elements of specified row
            printf("\n");
            total = total + arr[i][j]; //Taking sum of all values of the specified row
        }
    }
    return total;   //Returning total of all values of the specified row
}
int getColumnTotal(int arr[ROW][COL], int c)
{
    int total = 0;
    c = c - 1;
    printf("Elements of specified column are: \n");
    for (int i = 0; i < ROW ; i++)
    {
        for (int j = c; j < c + 1; j++)
        {
            printf("%d, ", arr[i][j]);  //Printing elements of specified column
            printf("\n");
            total = total + arr[i][j]; //Taking sum of all values of the specified column
        }
    }
    return total;     //Returning total of all values of the specified column
}
int getHighestInRow(int arr[ROW][COL], int r)
{
    int max = 0;
    r = r - 1;
    printf("Elements of specified row are: \n");
    for (int i = r; i < r + 1; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d, ", arr[i][j]);   //Printing elements of specified row
            printf("\n");
            if (arr[i][j] > max)
            {
                max = arr[i][j];           //Finding highest value in a speified row   
            }         
        }      
    }
    
    return max;    //Returning highest value in a speified row 
}
int getLowestInRow(int arr[ROW][COL], int r)
{
    int min = 0;
    r = r - 1;
    printf("\nElements of specified row are: \n");
    for (int i = r; i < r + 1; i++)
    {
        min = arr[i][0];
        for (int j = 0; j < COL; j++)
        {
            printf("%d, ", arr[i][j]);   //Printing elements of specified row
            printf("\n");
            if (arr[i][j] < min)
            {
                min = arr[i][j];           //Finding lowest value in a speified row   
            }
        }
    }

    return min;    //Returning lowest value in a speified row 
}
int main()
{
    int arr[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Enter element of %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);  //Taking input in array
        }
    }

    printf("\nArray is: \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d\t", arr[i][j]);  //Prrinting 2-d array
        }
        printf("\n");
    }

    printf("\nTotal of all values of this 2-D array is : %d", getTotal(arr));
    printf("\nAverage of all values in this 2-D array is : %d", getAverage(arr));

    int rowNo;
    do
    {
        printf("\nEnter the row whose total value u want: ");
        scanf("%d", &rowNo);
    } while (rowNo > ROW || rowNo <= 0);
   
    printf("\nTotal of all values of the specified row are: %d", getRowTotal(arr, rowNo));

    int colNo;
    do
    {
        printf("\nEnter the column whose total value u want: ");
        scanf("%d", &colNo);
    } while (colNo > COL || colNo <= 0);

    printf("\nTotal of all values of the specified column are: %d", getColumnTotal(arr, colNo));


    int specificRow;
    do
    {
        printf("\nEnter the row whose highest element u want to know: ");
        scanf("%d", &specificRow);
    } while (specificRow > ROW || specificRow <= 0);

    printf("\nThe highest value in the specified row is: %d", getHighestInRow(arr, specificRow));
    printf("\nThe lowest value in the specified row is: %d", getLowestInRow(arr, specificRow));
    
    return 0;
}
