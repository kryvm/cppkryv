/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double arr[3][3] = {{1.0,2,3,},{4,5,6}, {7,8,9}};
    unsigned N,M;
    printf("i=");
    scanf("%d",&N);
    printf("j=");
    scanf("%d",&M);
    double a;
    printf("a=");
    scanf("%lf",&a);
    if(N<=2 && M<=2)
    {
        arr[N][M] = a;
    }    
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%lf  ",arr[i][j]);
        }
        printf("\n");
    }
}
