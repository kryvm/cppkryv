/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
double posl1(double b, unsigned n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return b + 1/posl1(b,n-1);
    }
}

int main()
{
    unsigned n;
    printf("n=?\n");
    scanf("%d",&n);
    printf("a)\n");
    
    double b1;
    printf("b1=?\n");
    scanf("%lf",&b1);
    double sum1 = posl1(b1,n);
    printf("sum = %lf\n",sum1);
    
    double l1;
    printf("б)\n");
    printf("l1=?\n");
    scanf("%lf",&l1);
    double sum2 = 4*n+2;
    for(int i = 0;i<n;i++)
    {
        sum2 = 4*(n-i) + 2 + 1/sum2;
    }
    printf("sum = %lf\n",sum2);
    
    double x1;
    printf("в)\n");
    double sum3 = 2;
    for(int i = 0;i<2*n;i++)
    {
        sum2 = 1 + i % 2 + 1.0/sum2; 
    }
    printf("sum = %lf\n",sum3);
    
}
