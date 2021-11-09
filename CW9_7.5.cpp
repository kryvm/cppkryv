/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <climits>

int main()
{
    unsigned mas[5];
    unsigned sum1 = 0, sum2 = 0;
    for(int i = 0;i<5;i++)
    {
        printf("Enter mas[%d]:",i);
        scanf("%d",&mas[i]);
    }
    for(int i = 0;i<5;i++)
    {
        if(i%2 == 0)
        {
           sum1 += mas[i]; 
        }
        else
        {
           sum2 += mas[i]; 
        }
    }
    printf("sum1=%d,sum2=%d",sum1,sum2);
}
