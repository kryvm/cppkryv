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
    double x,sum,dodanok,eps;
    dodanok = 100000;
    sum = 1;
    int k = 1;
    printf("x=?\n");
    scanf("%lf",&x);
    printf("eps=?\n");
    scanf("%lf",&eps);
    if(abs(x)<1.0 && eps>0)
    {
        while(abs(dodanok)>eps)
        {
            dodanok = pow(-1,k)*(k+1)*(k+2)*pow(x,k)/2;
            sum += dodanok;
            k++;
            printf("sum = %lf, dodanok = %lf\n",sum,dodanok);
        }
    }
    else
    {
        printf("|x|>1 or eps<0");
    }
    printf("sum = %lf",sum);
}
