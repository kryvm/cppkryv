/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
int fib(unsigned n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int fibgt_num(double a)
{
    int sum = 0;
    int n = 0;
    while(sum<a)
    {
        sum = fib(n);
        n++;
    }
    n--;
    n--;
    return n;
}

int fiblt_num(double a)
{
    int sum = 0;
    int n = 0;
    while(sum<=a)
    {
        sum = fib(n);
        n++;
    }
    n--;
    return n;
}

int fiblt_sum(double sum)
{
    int n = 0;
    int sum1=0;
    while(sum1<sum)
    {
        sum1 = fib(n);
        printf("n=%d, sum=%d\n",n,sum1);
        n++;
    }
    n--;
    sum1 = fib(n-1);
    return sum1;
}

int main()
{
    printf("Номера начинаются с 0 \n а)");
    unsigned n;
    printf("n=?\n");
    scanf("%d",&n);
    int k = fib(n);
    printf("%d\n",k);
    
    double a1;
    printf("б)\n");
    printf("a1=?\n");
    scanf("%lf",&a1);
    int n1;
    n1 = fibgt_num(a1);
    int fib1;
    fib1 = fib(n1);
    printf("n=%d,fib=%d\n",n1,fib1);
    
    printf("в)\n");
    int n2;
    n2 = fiblt_num(a1);
    int fib2;
    fib2 = fib(n2);
    printf("n=%d,fib=%d\n",n2,fib2);
    
    printf("г)\n");
    double sum = 1000;
    int k2 = fiblt_sum(sum);
    printf("%d",k2);
}
