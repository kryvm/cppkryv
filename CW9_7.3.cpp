/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    double mas[10];
    double sum;
    for(int i = 0;i<10;i++)
    {
        printf("Enter mas[%d]:",i);
        scanf("%lf",&mas[i]);
    }
    for(int i = 0;i<10;i++)
    {
        if(mas[i]>exp(1))
        {
            sum += mas[i];
        }
    }
    printf("sum=%lf",sum);
}
