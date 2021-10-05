/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a,b;
    printf("Введите два числа через пробел\n");
    scanf("%lf %lf",&a,&b);
    double max,min;
    if(a>b)
    {
        max = a;
        min = b;
        printf("max = %lf, min = %lf",max,min);
    }
    else if(b>a)
    {
        max = b;
        min = a;
        printf("max = %lf, min = %lf",max,min);
    }
    else
    {
        printf("a=b");
    }
}
