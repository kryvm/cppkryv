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
    int mas[5];
    int max=-2147483648;
    for(int i = 0;i<5;i++)
    {
        printf("Enter mas[%d]:",i);
        scanf("%d",&mas[i]);
    }
    for(int i = 0;i<5;i++)
    {
        if(mas[i]>max)
        {
            max= mas[i];
        }
    }
    printf("max=%d",max);
}
