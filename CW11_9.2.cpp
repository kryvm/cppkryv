/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int input(int** arr)
{
    *arr = (int*) malloc(0 * sizeof **arr);
    int n = 0;
    if (*arr)
    {
        while (n < 100)
        {
            int m;
            printf("m = ?\n");
            scanf("%d",&m);
            if (m == 0)
                break;
            n++;
            *arr = (int*) realloc(*arr, n * sizeof **arr);
            if (*arr == NULL)
                exit(1);
            (*arr)[n - 1] = m;
        }
    }
    return n;
}

void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void full_squares(int* arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        double sr = sqrt(arr[i]);
        if (sr == (int) sr)
            count++;
    }
    printf("Full squares = %d\n",count);
}

void full_cubes(int* arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        double cr = pow(arr[i],1.0/3);
        if (cr == (int) cr)
            count++;
    }
    printf("Full cubes = %d\n",count);
}

int main()
{
    int* arr;
    int n = input(&arr);
    print(arr, n);
    full_squares(arr, n);
    full_cubes(arr, n);
    free(arr);
    return 0;
}
