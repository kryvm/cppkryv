/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int* create_matrix(int n) {
    int* matr = (int*) calloc(n * n, sizeof *matr);
    if (matr == nullptr)
        exit(1);
    return matr;
}


int* input_matrix(int n) {
    int* matr = create_matrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matr[%d][%d] = ",i*n,j);
            scanf("%d",&matr[i*n + j]);
        }
    }
    return matr;
}

void print_matrix(int* matr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matr[%d][%d] = %d\n",i*n,j,matr[i*n + j]);
        }
    }
    printf("\n");
}

int* product_matrix(int* a, int* b, int n) {
    int* c = create_matrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c[i * n + j] += a[i * n + k] * b[k * n + j];
            }
        }
    }
    return c;
}

int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    int* a = input_matrix(n);
    int* b = input_matrix(n);
    int* c = product_matrix(a, b, n);
    print_matrix(c, n);
    free(a);
    free(b);
    free(c);
    return 0;
}
