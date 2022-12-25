//Taking transpose of a matrix and storing it in the same matrix
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define COL 10
void transpose(int trans_matrix[][COL], int r, int c);
void display(int matrix[][COL], int rows, int cols);
int main()
{
	int matrix[COL][COL];
	int rows = 0;
	int cols = 0;

	//Input -> Number of rows
	printf("Enter number of rows of matrix: ");
	scanf("%d", &rows);
	//Input validation
	while (rows > 10 || rows <= 0)
	{
		printf("INVALID INPUT!!!  Values are out of bounds.\n");
		printf("Enter valid number of rows of matrix: ");
		scanf("%d",& rows);
	}

	//Input -> Number of columns
	printf("Enter number of columns of matrix: ");
	scanf("%d", &cols);

	//Input validation
	while (cols > 10 || cols <= 0)
	{
		printf("INVALID INPUT!!!  Values are out of bounds.\n");
		printf("Enter valid number of rows of matrix: ");
		scanf("%d", &cols);
	}


	//Input from user -> Elements of rows and columns(matrix) 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("Enter %d row and %d column of matrix: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}


	//calling display function to dispaly values of matrix
	printf("Before taking transpose: \n");
	display(matrix, rows, cols);

	transpose(matrix, rows, cols);
	return 0;
}
void display(int matrix[][COL], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
void transpose(int trans_matrix[][COL], int r, int c)
{	
	printf("After taking : \n");
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			printf("%d\t", trans_matrix[j][i]);
		}
		printf("\n");
	}
	
}
*/

