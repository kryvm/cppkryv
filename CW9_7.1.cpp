/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mas[5] = {1,2,3,4,5};
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int count = 0;
    for(int i = 0;i<5;i++)
    {
        if(mas[i]<a)
        {
            count++;
        }
    }
    printf("Чисел меньше а = %d",count);
}
