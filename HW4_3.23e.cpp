/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
double isReLu(double a, double x)
{
    if(x<0)
    {
        return x/(sqrt(1 + a*x*x));
    }
    else
    {
        return x;
    }
}
double isReLu_derivative(double a, double x)
{
    if(x<0)
    {
        return 1/sqrt(pow((1+a*x*x),3));
    }
    else
    {
        return 1;
    }
}

int main()
{
    double a,x;
    printf("a= x=\n");
    scanf("%lf %lf",&a,&x);
    double func1,func2;
    func1 = isReLu(a,x);
    func2 = isReLu_derivative(a,x);
    printf("func = %lf, func derivative = %lf",func1,func2);
}
