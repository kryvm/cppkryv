/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double t = 365.0;
    double x = 1.0+(1.0/3);
    x = 7.0 + (1.0/x);
    x = 4.0 + (1.0/x);
    x = 1.0/x;
    t = t + x;
    printf("%lf",t);
}
