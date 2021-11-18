/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int** create_matrix(int n)
{
    int** matr = (int**) malloc(n * sizeof *matr);
    if (matr == nullptr)
        exit(1);
    for (int i = 0; i < n; i++) {
        matr[i] = (int*) calloc(n, sizeof **matr);
        if (matr[i] == nullptr)
            exit(1);
    }
    return matr;
}

int** freefromto(int** matr, int n, int k1, int k2)
{
    k2++;
    int dif = k2 - k1;
    int** matr2 = create_matrix(n-dif-1);
    int k = 0;
    for(int i = 0; i<k1; i++)
    {
        matr2[i] = matr[i];
        k++;
    }
    for(int i = k2; i<n;i++)
    {
        matr2[k] = matr[i];
        k++;
    }
    return matr2;
}

void free_matrix(int** matr, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matr[i]);
    }
    free(matr);
}

int** input_matrix(int n)
{
    int** matr = create_matrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matr[%d][%d] = ",i,j);
            scanf("%d",&matr[i][j]);
        }
    }
    return matr;
}

void print_matrix(int** matr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matr[%d][%d] = %d",i,j,matr[i][j] );
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n,k1,k2;
    printf("n = ");
    scanf("%d",&n);
    printf("k1 = ");
    scanf("%d",&k1);
    printf("k2 = ");
    scanf("%d",&k2);
    int** arr = input_matrix(n);
    int** arr2 = freefromto(arr,n,k1,k2);
    print_matrix(arr2, n);
    free_matrix(arr, n);
    free_matrix(arr2, n-k2+k1-1);
}

