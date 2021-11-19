/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int* input(int n)
{
    int* arr = (int*) calloc(n, sizeof (int));
    if (arr == nullptr)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    return arr;
}

void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");
}

int* subtract(int* a, int* b, int n)
{
    int* c = (int*) calloc(n, sizeof (int));
    if (c == nullptr)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    return c;
}

int main()
{
    int n;
    printf("n=?\n");
    scanf("%d",&n);
    int* a = input(n);
    int* b = input(n);
    int* c = subtract(a, b, n);
    print(c, n);
    free(a);
    free(b);
    free(c);
    return 0;
}
