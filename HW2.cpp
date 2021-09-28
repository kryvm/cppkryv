/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c;
    double a1,b1,c1;
    printf("Введите длины сторон через пробел:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    a1 = acos((-1)*(a*a - b*b - c*c)/(2*b*c));
    b1 = acos((-1)*(b*b - a*a - c*c)/(2*a*c));
    c1 = acos((-1)*(c*c - b*b - a*a)/(2*b*a));
    printf("alpha = %lf ,beta = %lf, gamma = %lf в радианах\n",a1,b1,c1);
    double a2 = a1*180/M_PI;
    double b2 = b1*180/M_PI;
    double c2 = c1*180/M_PI;
    printf("alpha = %lf ,beta = %lf, gamma = %lf в градусах\n",a2,b2,c2);
}
