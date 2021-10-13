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
    unsigned n;
    double x,sum;
    sum = 0;
    printf("x= n=\n");
    scanf("%lf %du",&x,&n);
    for(int i=1;i<n+1;i++)
    {
        sum += i*pow(x,i);
    }
    printf("y=%lf",sum);
}
