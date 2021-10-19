/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
double ak(unsigned n);
double bk(unsigned n)
{
    if(n==1)
    {
        return 1.0;
    }
    else if(n==2)
    {
        return 0.0;
    }
    else
    {
        double sum = bk(n-1) + ak(n-1);
        return sum;
    }
}

double ak(unsigned n)
{
    if(n==1)
    {
        return 0.0;
    }
    else if(n==2)
    {
        return 1.0;
    }
    else
    {
        return ak(n-1)/n + ak(n-2)*bk(n);
    }
}

int main()
{
    double sum;
    int n;
    printf("n=?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum += pow(2,i)/(ak(i)+ bk(i));
        printf("ak = %lf bk = %lf i = %d\n",ak(i),bk(i),i);
    } 
    printf("sum = %lf",sum);
}
