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
    double a,sum;
    sum = 0;
    unsigned n;
    n = 1;
    printf("a=?\n");
    scanf("%lf",&a);
    while(sum<a)
    {
        sum += 1.0/n;
        n++;
    }
    n--;
    printf("sum=%lf, n=%d, a=%lf",sum,n,a);
}
