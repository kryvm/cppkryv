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
    double t = 365;
    double x = 1+(1/3);
    x = 7 + (1/x);
    x = 4 + (1/x);
    x = 1/x;
    t = t + x;
    printf("%lf",t);
}
