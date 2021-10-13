/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    double x,z;
    z = 1;
    double y = 1;
    printf("x= n=\n");
    scanf("%lf %d",&x,&n);
    if(abs(x)>=1)
    {
        printf("|x|>=1");
    }
    else
    {
        for(int i = 1;i<n+1;i++)
        {
            y = y + z*x/i;
            printf("x = %lf i = %d ",x,i);
        }
    }
    printf("\ny=%lf",y);
}
