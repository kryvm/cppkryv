/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
double func(double x, unsigned n)
{
    double y;
    y = sin(x);
    for(int i = 1;i<n;i++)
    {
        y = sin(y);
    }
    return y;
}

int main()
{
    double x;
    unsigned n;
    printf("Enter x and n:\n");
    scanf("%lf %du",&x,&n);
    double y = func(x,n);
    printf("y=%lf",y);
}
