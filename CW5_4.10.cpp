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
    double a=2;
    while(a>0 && 1+a!=1)
    {
        a = a/2;
    }
    printf("%lf",a);
}
