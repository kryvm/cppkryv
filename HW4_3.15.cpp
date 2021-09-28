/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,x0,y0,r;
    printf("a= b= c= v= u= r=?\n");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&x0,&y0,&r);
    double d;
    d = abs(a*x0+b*y0+c)/sqrt(a*a + b*b);
    if(a!=0 && b!=0)
    {
        if(r!=0)
        {
            if(d>r)
            {
                printf("Не касаются");
            }
            else if(d==r)
            {
                printf("одна точка соприкосновения");
            }
            else
            {
                printf("две точки соприкосновения");
            }
        }
        else
        {
            printf("некорректно задана окружность");
        }
    }
    else
    {
        printf("некорректно задана прямая");
    }
}
