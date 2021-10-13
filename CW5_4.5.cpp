/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
unsigned doubfact(unsigned n)
{
    unsigned y = 1;
    if(n%2 == 0)
    {
        for(int i = 2;i<n+1;i+=2)
        {
            y = y*i;
        }
    }
    else
    {
        for(int i = 1;i<n+1;i+=2)
        {
            y = y*i;
        }
    }
    return y;
}

int main()
{
    unsigned n,y;
    printf("n=?\n");
    scanf("%d",&n);
    y = doubfact(n);
    printf("y=%d",y);
}
