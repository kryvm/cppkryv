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
    double x,y;
    unsigned k;
    printf("x= k=?\n");
    scanf("%lf %d",&x,&k);
    y = 1;
    int n;
    n = 2*k+2;
    for(int i=1;i<n;i++)
    {
        y = y*x/i;
        printf("x=%lf i=%d ",x,i);
    }
    printf("y=%lf",y);
}
