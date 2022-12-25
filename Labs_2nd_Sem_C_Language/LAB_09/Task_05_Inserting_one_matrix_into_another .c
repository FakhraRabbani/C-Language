//Inserting one matrix into another 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
void insert(int a1[][10], int a2[][10], int m, int n, int p, int q, int s, int e);
int main()
{
    int ar1[10][10];
    int ar2[10][10];
    int M, N, P, Q, I, J;

    printf("Enter the number of rows of array 1 : ");
    scanf("%d", &M);
    printf("Enter the number of colums of array 1 :");
    scanf("%d", &N);
    printf("Enter the number of rows of array 2 : ");
    scanf("%d", &P);
    printf("Enter the number of colums of array 2 :");
    scanf("%d", &Q);
    printf("Enter the index of row to replece:");
    scanf("%d", &I);
    printf("Enter the index of column to replece:");
    scanf("%d", &J);
    while (P + I > M)
    {
        printf("Enter the starting index to replece:");
        scanf("%d", &I);
    }
    while (Q + J > N)
    {
        printf("Enter the ending index to replece:");
        scanf("%d", &J);
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Enter the value of array 1 of row %d and column %d ", i + 1, j + 1);
            scanf("%d", &ar1[i][j]);

        }
    }
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            printf("Enter the value of array 2 of row %d and column %d ", i + 1, j + 1);
            scanf("%d", &ar2[i][j]);

        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            printf("%d ", ar2[i][j]);
        }
        printf("\n");
    }

    insert(ar1, ar2, M, N, P, Q, I, J);
}
void insert(int a1[][10], int a2[][10], int m, int n, int p, int q, int s, int e)
{
    int l = s;
    int a = e;


    int y = 0, z = 0;
    for (int i = 0; i < m; i++)
    {
        if (s <= i && y < p)
        {
            for (int j = 0; j < n; j++)
            {
                if (e <= j && z < q)
                {

                    a1[i][j] = a2[y][z];
                    z++;
                }
            }
            z = 0;
            y++;
        }
    }
    printf("\n\n");
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a1[i][j]);
            }
            printf("\n");
        }
    }
}
*/