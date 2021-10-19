/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int posl(unsigned n)
{
    if(n==1 || n==2 || n==3)
    {
        return -99;
    }
    else
    {
        return posl(n-1)+posl(n-3)+100;
    }
}

int main()
{
    int sum;
    int n = 1;
    sum = posl(n);
    while(sum<0)
    {
        sum = posl(n);
        n++;
        printf("sum = %d n = %d\n",sum,n);
    }
}
