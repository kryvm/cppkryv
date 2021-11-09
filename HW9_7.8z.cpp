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
    unsigned n;
    printf("n=");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        printf("mas[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int c = 0;
    for(int i = 0; i<n;i++)
    {
        count = 0;
        for (int j=0; j<log2(arr[i]); j++)
            {
            if ((arr[i] >> j) % 2 == 1)
                count++;
            }
        if(count == 5)
        {
            c++;
        }
    }
    printf("Кол-во чисел с 5-ю единичными битами = %d",c);
}
