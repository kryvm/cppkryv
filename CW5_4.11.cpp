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
    int n;
    double sum,dob,x,k;
    double srafm,srgeom;
    printf("a[0]=");
    scanf("%lf",&x);
    if(x!=0)
    {
        sum = sum + x; 
        dob = 1*x;
        n = 1;
        while(x!=0)
        {
            printf("a[%d]=",n);
            scanf("%lf",&x);
            if(x!=0)
            {
                sum = sum + x; 
                dob = dob*x;
                n++;
            }
        }
        srafm = sum/n;
        srgeom = pow(dob,1.0/n);
    }
    else
    {
        srafm = 0;
        srgeom = 0;
    }
    printf("srafm = %lf, srgeom = %lf\n",srafm,srgeom);
}
