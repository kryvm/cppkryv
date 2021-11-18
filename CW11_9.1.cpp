/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    printf("n=?\n");
    scanf("%d",&n);
    if (n > 0) 
    {
        double* arr = (double*) calloc(n, sizeof *arr);
        if (arr) 
        {
            double sum = 0;
            for (int i = 0; i < n; i++) 
            {
                printf("arr[%d]",i);
                scanf("%lf",&arr[i]);
                sum += arr[i] * arr[i];
            }
            printf("%lf",sum);
            free(arr);
        }
    }
}
