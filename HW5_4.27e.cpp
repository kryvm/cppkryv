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
    unsigned k = 0;
    printf("eps=?\n");
    double eps;
    scanf("%lf",&eps);
    double dodanok = 1;
    double sum;
    while(abs(dodanok)>eps)
    {
        dodanok = pow(-1.0,k)/(pow(3,k)*(2.0*k+1.0));
        sum = sum + dodanok;
        printf("sum = %lf, dodanok = %lf\n",sum,dodanok);
        k = k+1;
    }
    sum = 2*sqrt(3)*sum;
    printf("sum = %lf",sum);
}
