/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#define N 20
#define M 20

void inp(double arr[N][M],int n, int m)
{
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ",i,j);
            scanf("%lf",&arr[i][j]);
        }
    }
}

void print(double arr[N][M],int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lf ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,m;
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);
    double arr[N][M];
    inp(arr,n,m);
    print(arr,n,m);
}
