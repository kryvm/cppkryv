/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(double arr[],int size)
{
    double sum;
    for(int i = 0;i<size;i++)
    {
        double x1 = 100*arr[i+1] - arr[i];
        double x2 = arr[i] - 1;
        sum += pow(x1,2) + pow(x2,2);
    }
    return sum;
}

int main(){
    unsigned n = 5;
    double arr[n] = {0,0,0,0,0};
    double res = func(arr,n);
    printf("%lf",res);
}


